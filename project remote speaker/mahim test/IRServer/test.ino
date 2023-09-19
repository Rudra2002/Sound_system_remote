 [htm,css,bootstrap]


 $html
 $cssff
 word 
 int link =[100]
 link[1]=css
 link[2]=html
 link[3]=bootstrap
    


 void handle$link(){
    LittleFS.begin();
    Serial.println("File system initialized");
     File main = LittleFS.open("/$link.html", "r");
     server.send(200, "text/$link", main);


 }