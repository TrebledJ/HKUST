#include <stdint.h>


struct S {
    float f;    //  8 bytes
    int16_t i;  //  4 bytes
    char c[2];  //  2 bytes
};  //  Size: 8 + 4 + 2 = 14 bytes


/**

                                           ___                                        ___                  
                                          (   )                                      (   )                 
                                  .--.     | |_      ___ .-.     ___  ___    .--.     | |_         .--.    
                                /  _  \   (   __)   (   )   \   (   )(   )  /    \   (   __)     /  _  \   
                               . .' `. ;   | |       | ' .-. ;   | |  | |  |  .-. ;   | |       . .' `. ;  
                               | '   | |   | | ___   |  / (___)  | |  | |  |  |(___)  | | ___   | '   | |  
                               _\_`.(___)  | |(   )  | |         | |  | |  |  |       | |(   )  _\_`.(___) 
                              (   ). '.    | | | |   | |         | |  | |  |  | ___   | | | |  (   ). '.   
                               | |  `\ |   | ' | |   | |         | |  ; '  |  '(   )  | ' | |   | |  `\ |  
                               ; '._,' '   ' `-' ;   | |         ' `-'  /  '  `-' |   ' `-' ;   ; '._,' '  
                                '.___.'     `.__.   (___)         '.__.'    `.__,'     `.__.     '.___.'   
                                      

[------------------------------------------------------- 14 bytes ------------------------------------------------------------------]

+---------------------------------------------------------------------------+-------------------------------------+--------+--------+
|                                     f                                     |                  i                  |  c[0]  |  c[1]  |
+---------------------------------------------------------------------------+-------------------------------------+--------+--------+

**/


union U {
    float f;    //  8 bytes
    int16_t i;  //  4 bytes
    char c[2];  //  2 bytes
};  //  Size: 8 bytes


/**
 
                                   .-.                                  
             ___  ___   ___ .-.   ( __)   .--.    ___ .-.       .--.    
            (   )(   ) (   )   \  (''")  /    \  (   )   \    /  _  \   
             | |  | |   |  .-. .   | |  |  .-. ;  |  .-. .   . .' `. ;  
             | |  | |   | |  | |   | |  | |  | |  | |  | |   | '   | |  
             | |  | |   | |  | |   | |  | |  | |  | |  | |   _\_`.(___) 
             | |  | |   | |  | |   | |  | |  | |  | |  | |  (   ). '.   
             | |  ; '   | |  | |   | |  | '  | |  | |  | |   | |  `\ |  
             ' `-'  /   | |  | |   | |  '  `-' /  | |  | |   ; '._,' '  
             '.__.'    (___)(___) (___)  `.__.'  (___)(___)   '.___.'   

[--------------------------------- 8 bytes ---------------------------------]

+---------------------------------------------------------------------------+
|                                     f                                     |
+-------------------------------------+-------------------------------------+
|                 i                   |           (empty, 4 bytes)          |
+-------------------------------------+-------------------------------------+
|  c[0]  |  c[1]  |                   (empty, 6 bytes)                      |
+--------+--------+---------------------------------------------------------+

**/