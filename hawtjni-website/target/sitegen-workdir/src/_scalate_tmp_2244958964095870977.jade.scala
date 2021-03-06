/* NOTE this file is autogenerated by Scalate : see http://scalate.fusesource.org/ */

import _root_.scala.collection.JavaConversions._
import _root_.org.fusesource.scalate.support.TemplateConversions._
import _root_.org.fusesource.scalate.util.Measurements._

object $_scalate_$_scalate_tmp_2244958964095870977_jade {
  def $_scalate_$render($_scalate_$_context: _root_.org.fusesource.scalate.RenderContext): Unit = {
    import _root_.org.fusesource.scalate.support.RenderHelper.{sanitize=>$_scalate_$_sanitize, preserve=>$_scalate_$_preserve, indent=>$_scalate_$_indent, smart_sanitize=>$_scalate_$_smart_sanitize, attributes=>$_scalate_$_attributes}
    ;{
      implicit val context: _root_.org.fusesource.scalate.support.DummyRenderContext = $_scalate_$_context.attribute("context")
      import context._
      ;{
        val response: _root_.org.fusesource.scalate.support.DummyResponse = $_scalate_$_context.attributeOrElse("response", new _root_.org.fusesource.scalate.support.DummyResponse())
        
    // common imports go here
    import _root_.Website._;
    
        
        $_scalate_$_context << ( "<div class=\"left\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "# Source Repository" );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"right\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context.escape(           project_name
 );
          $_scalate_$_context << ( " stores its source code in a [Git](http://git-scm.com/) repository hosted on [github](http://github.com) at this location:\n\n* [" );
          $_scalate_$_context.escape(           github_page
 );
          $_scalate_$_context << ( "](" );
          $_scalate_$_context.escape(           github_page
 );
          $_scalate_$_context << ( ")\n\nIf you are new to Git you might like to try the [Git guide for subversion users](http://git.or.cz/course/svn.html) or have a look at the [Git community book](http://book.git-scm.com/)." );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"left\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "# How to Checkout" );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"right\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "Read only access to the repository is available at the following URL:\n\n* **" );
          $_scalate_$_context.escape(           git_user_url
 );
          $_scalate_$_context << ( "**\n\nYou must first install a [Git client](http://git-scm.com/download). Then you clone the repository using the following:\n\n    git clone " );
          $_scalate_$_context.escape(           git_user_url
 );
          $_scalate_$_context << ( "\n    cd " );
          $_scalate_$_context.escape(           project_id
 );
          $_scalate_$_context << ( "\n\nNow you probably want to try [build the ${project_name} code](building.html) " );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"left\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "# Committer access" );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"right\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "Project members can push to the repository using the following URL:\n\n* **" );
          $_scalate_$_context.escape(           git_commiter_url
 );
          $_scalate_$_context << ( "**\n\nYou must first install a [Git client](http://git-scm.com/download). Then you clone the repository using the Git URL:\n\n    git clone " );
          $_scalate_$_context.escape(           git_commiter_url
 );
          $_scalate_$_context << ( "\n    cd " );
          $_scalate_$_context.escape(           project_id
 );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"left\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "# Contributing patches" );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"right\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "If you are not yet a committer but want to contribute some patch (we love [contributions!](contributing.html)) here's how you can submit patches\n" );
        } ) ) ) );
        $_scalate_$_context << ( "\n" );
                include("/community/_creating_patches.ssp.md")

        $_scalate_$_context << ( "</div>\n<div class=\"left\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "# Next steps" );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n<div class=\"right\">\n  " );
        $_scalate_$_context << ( $_scalate_$_indent ( "  ", $_scalate_$_context.value ( _root_.org.fusesource.scalate.filter.FilterRequest("markdown", $_scalate_$_context.capture { 
          $_scalate_$_context << ( "Once you have checked out the code try following \n\n* [instructions to build " );
          $_scalate_$_context.escape(           project_name
 );
          $_scalate_$_context << ( "](building.html) \n* read the [documentation](../documentation/index.html)\n* browse the [developer links and maven reports](developers.html)" );
        } ) ) ) );
        $_scalate_$_context << ( "\n</div>\n" );
      }
    }
  }
}


class $_scalate_$_scalate_tmp_2244958964095870977_jade extends _root_.org.fusesource.scalate.Template {
  def render(context: _root_.org.fusesource.scalate.RenderContext): Unit = $_scalate_$_scalate_tmp_2244958964095870977_jade.$_scalate_$render(context)
}
