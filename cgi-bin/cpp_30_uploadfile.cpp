#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 
 
#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>
 
using namespace std;
using namespace cgicc;
 
int main ()
{
   Cgicc cgi;
 
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>CGI File Upload</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
 
   const_file_iterator file = cgi.getFile("userfile");
   if(file != cgi.getFiles().end()) {

      cout << HTTPContentHeader(file->getDataType());

      file->writeToStream(cout);
   }
   cout << "<File Upload Success>\n";
   cout << "</body>\n";
   cout << "</html>\n";
   
   return 0;
}
