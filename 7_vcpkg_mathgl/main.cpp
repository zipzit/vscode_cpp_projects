// http://mathgl.sourceforge.net/doc_en/Examples.html

#include <mgl2/mgl.h>
int main()
{
  mglGraph gr;
  gr.FPlot("sin(pi*x)");
  gr.WriteFrame("test.png");
}