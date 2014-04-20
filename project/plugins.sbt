
resolvers ++= Seq( 
  Classpaths.typesafeResolver,
  Classpaths.typesafeSnapshots,
  "Scala Tools Snapshots" at "http://scala-tools.org/repo-snapshots/" ,
  "Typesafe Repository" at "http://repo.typesafe.com/typesafe/releases/" ,
  "spray repo" at "http://repo.spray.io",
  Resolver.url("artifactory", 
    url("http://scalasbt.artifactoryonline.com/scalasbt/sbt-plugin-releases")
  )(Resolver.ivyStylePatterns),
  Resolver.url(
  "bintray-sbt-plugin-releases",
    url("http://dl.bintray.com/content/sbt/sbt-plugin-releases"))(
      Resolver.ivyStylePatterns),
  "Repo1 Maven" at "http://repo1.maven.org/maven2",
  "gseitz@github" at "http://gseitz.github.com/maven/",
  "bigtoast-github" at "http://bigtoast.github.com/repo/",
  "softprops-maven" at "http://dl.bintray.com/content/softprops/maven"
)

addSbtPlugin("com.typesafe.sbteclipse" % "sbteclipse-plugin" % "2.2.0")

addSbtPlugin("io.spray" % "sbt-revolver" % "0.7.2")

addSbtPlugin("io.spray" % "sbt-twirl" % "0.7.0")

addSbtPlugin("me.lessis" % "coffeescripted-sbt" % "0.2.3")

addSbtPlugin("me.lessis" % "less-sbt" % "0.2.2")

addSbtPlugin("net.virtual-void" % "sbt-dependency-graph" % "0.7.4")

addSbtPlugin("nandie" % "sbt-packd" % "0.1.0")


