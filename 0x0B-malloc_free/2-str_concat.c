#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s){
    int length = 0;
    
    while(s[length]){
        length++;
    }
    
    return length;
}

char *str_concat(char *s1, char *s2){
    
    int len1, len2;
    int i = 0;
    char *str;
    
    if (s1 == 0 || s2 == 0){
        return '\0';
    }
    
    len1 = _strlen(s1);
    len2 = _strlen(s2);
    
    str = (char*) malloc((len1 + len2) * sizeof(char) + 1);
    while (i < len1 + len2){
        
        if(i < len1){
            str[i] = s1[i];
        }
        else {
            str[i] = s2[i - len1];
        }
        i++;
    }
    
    str[i] = '\0';
    return str;
    
    
}
