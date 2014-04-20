import sbt._
import Keys._ 
import twirl.sbt.TwirlPlugin._
import com.typesafe.sbteclipse.plugin.EclipsePlugin._
import com.typesafe.sbteclipse.plugin.EclipsePlugin.EclipseKeys._
import spray.revolver.RevolverPlugin._
import coffeescript.Plugin._
import less.Plugin._
import nandie.packd.Packd._
import net.virtualvoid.sbt.graph.Plugin._

object HawtJNIBuild extends Build {
  val buildOrganization = "hawtjni"
  val buildVersion = "1.10-shared_ptr"
  val buildScalaVersion = "2.10.3"

  val buildScalacOptions = Seq("-encoding", "UTF-8", "-unchecked", "-deprecation",
    "-Yresolve-term-conflict:package",
    "-language:reflectiveCalls", "-language:implicitConversions", "-language:postfixOps",
    "-language:dynamics", "-language:higherKinds", "-language:existentials",
    "-language:experimental.macros")

  lazy val buildSettings = Defaults.defaultSettings ++ Seq(
    organization := buildOrganization,
    version := buildVersion,
    scalaVersion := buildScalaVersion,
    scalaVersion in Test := buildScalaVersion,
    scalacOptions := buildScalacOptions,
    scalacOptions in Test := buildScalacOptions,
    javacOptions ++= Seq("-encoding", "UTF-8"),
    exportJars := false,
    resolvers ++= Seq(
      "ibiblio.org-releases" at "http://mirrors.ibiblio.org/maven2/",
      "Maven Repo" at "http://repo2.maven.org/maven2",
      Classpaths.typesafeResolver,
      "spray repo" at "http://repo.spray.io",
      "Alfresco" at "https://maven.alfresco.com/nexus/content/repositories/public/",
      "clojars.org" at "http://clojars.org/repo",
      "conjars.org" at "http://conjars.org/repo",
      "snapshots-repo" at "http://scala-tools.org/repo-snapshots",
      "Sonatype Snapshots" at "https://oss.sonatype.org/content/repositories/snapshots/"))

  lazy val eclipseSettings = Seq(
    unmanagedSourceDirectories in Compile <<= (scalaSource in Compile)(Seq(_)),
    unmanagedSourceDirectories in Test <<= (scalaSource in Test)(Seq(_)),
    createSrc := EclipseCreateSrc.Default + EclipseCreateSrc.Resource,
    withSource := true)
    
 lazy val root = Project(id = "hawtjni",
     base = file("."),
     settings = buildSettings ++ graphSettings
   ) aggregate(generator, runtime)
     
  lazy val generatorDeps = Seq(
    "commons-cli" % "commons-cli" % "1.0",
    "org.apache.xbean" % "xbean-finder" % "3.6",
    "asm" % "asm" % "3.1",
    "asm" % "asm-commons" % "3.1"
   )
  lazy val runtimeDeps = Seq()
  
  lazy val testDeps = Seq()
    
 
  lazy val runtime = Project(id = "hawtjni-runtime",
     base = file("hawtjni-runtime"),  
     settings = buildSettings ++ 
     graphSettings ++
     Revolver.settings ++ 
     eclipseSettings ++      
     Seq(
         libraryDependencies ++= (runtimeDeps ++ testDeps)
      )
   )
   lazy val generator = Project(id = "hawtjni-generator",
     base = file("hawtjni-generator"),  
     settings = buildSettings ++ 
     graphSettings ++
     Revolver.settings ++ 
     eclipseSettings ++      
     Seq(
         libraryDependencies ++= (generatorDeps ++ testDeps)
      )
   ) dependsOn(runtime)
   
}

