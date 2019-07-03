#include<Morse.h>
Morse morse(13)
void setup(){
  Serial.begin(9600);
}
void loop() {
  String str1="",str2="";
  bool k=false;
  int n=0;
  if(Serial.available()>0){
    str1+=char(Serial.read());
    k=true;
    n++;
  }
  if(k){
    for(i=0;i<n;i++){
      switch(str1[i]){
        case 'a':str2 += "*-"; break; 
        case 'b':str2 += "-***";  break;
        case 'c':str2 += "-*-*";   break;
        case 'd':str2 += "-**";  break;
        case 'e':str2 += "*";break;
        case 'f':str2 += "**-*";  break;
        case 'g':str2 += "--*";break;
        case 'h':str2 += "****";break;
        case 'i':str2 += "**";   break;
        case 'j':str2 += "*---";break;
        case 'k':str2 += "-*-";break;
        case 'l':str2 += "*-**";   break;
        case 'm':str2 += "--";break;
        case 'n':str2 += "-*";break;
        case 'o':str2 += "---";break;
        case 'p':str2 += "*--*";break;
        case 'q':str2 += "--*-";break;
        case 'r':str2 += "*-*";break;
        case 's':str2 += "***";  break;
        case 't':str2 += "-";  break;
        case 'u':str2 += "**-";break;
        case 'v':str2 += "***-";  break;
        case 'w':str2 += "*--";break;
        case 'x':str2 += "-**-";break;
        case 'y':str2 += "-*--";break;
        case 'z':str2 += "--**";  break;
        case ' ':str2 +="/";break;
      }
      str2+=" ";
  }
  }
  Serial.println(morse_s);
  for (i = 0; str2[i]!='\0' ; i++)//从头到尾读取莫尔斯电码
    {
      if (morse_s[i] == '.')morse.dot();
      else if (morse_s[i] == '-')morse.dash();
      else if (morse_s[i] == '/')morse.w_space();
      if (morse_s[i] != ' ' && str[i] != '*')morse.c_space();
    }
  // put your setup code here, to run once:

}
