#include <iostream>
using namespace std;
 
int main ()
{
   cout << "Set-Cookie:UserID=water;\r\n";
   cout << "Set-Cookie:Password=water;\r\n";
   cout << "Set-Cookie:Domain=water.water.water;\r\n";
   cout << "Set-Cookie:Path=/perl;\n";
   cout << "Content-type:text/html\r\n\r\n";
 
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>CGI --- Cookies</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
 
   cout << "Set cookies" << endl;  
  
   cout << "<br/>\n";
   cout << "</body>\n";
   cout << "</html>\n";
   
   return 0;
}
