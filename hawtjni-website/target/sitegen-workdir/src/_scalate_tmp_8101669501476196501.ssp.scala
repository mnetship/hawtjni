/* NOTE this file is autogenerated by Scalate : see http://scalate.fusesource.org/ */

import _root_.scala.collection.JavaConversions._
import _root_.org.fusesource.scalate.support.TemplateConversions._
import _root_.org.fusesource.scalate.util.Measurements._

object $_scalate_$_scalate_tmp_8101669501476196501_ssp {
  def $_scalate_$render($_scalate_$_context: _root_.org.fusesource.scalate.RenderContext): Unit = {
    ;{
      implicit val context: _root_.org.fusesource.scalate.support.DummyRenderContext = $_scalate_$_context.attribute("context")
      import context._
      ;{
        val response: _root_.org.fusesource.scalate.support.DummyResponse = $_scalate_$_context.attributeOrElse("response", new _root_.org.fusesource.scalate.support.DummyResponse())
        
    // common imports go here
    import _root_.Website._;
    
        
        $_scalate_$_context << ( "\nYou may find the [Frequently Asked Questions (FAQ)](faq.html) useful.\n\nWe love feedback of all kinds; whether it's thoughts, ideas, suggestions\nor bug reports!\n\nTo submit feedback please contact the [community](index.html),\nor use the [" );
        $_scalate_$_context <<< (         project_name
 );
        $_scalate_$_context << ( " Issue Tracker](" );
        $_scalate_$_context <<< (         project_issue_url
 );
        $_scalate_$_context << ( ").\n\n### See Also\n\n* [FAQ](faq.html)\n* [Community](index.html)\n* [Issue Tracker](" );
        $_scalate_$_context <<< (         project_issue_url
 );
        $_scalate_$_context << ( ")\n" );
      }
    }
  }
}


class $_scalate_$_scalate_tmp_8101669501476196501_ssp extends _root_.org.fusesource.scalate.Template {
  def render(context: _root_.org.fusesource.scalate.RenderContext): Unit = $_scalate_$_scalate_tmp_8101669501476196501_ssp.$_scalate_$render(context)
}