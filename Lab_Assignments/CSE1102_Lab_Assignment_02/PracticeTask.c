/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
The output of This PracticeTask Code is
var1: 0
var2: 0
var3: 1
var4: 0
var5: 1
result6: 1
result7: 0
result8: 0
result9: 0
result10: 1
result6: 1
*/

#include <stdio.h>

int main() {
    int var1, var2, var3, var4, var5, var6;
    int result1, result2, result3, result4, result5, result6, result7, result8, result9, result10;
    
    var1 = var2 = var3 = var4 = var5 = var6 = 0;
    result1 = result2 = result3 = result4 = result5 = result6 = result7 = result8 = result9 = result10 = 0;
    
    var1 = ((!(1) || 1) && 0);
    var2 = var1 && 0;
    var3 = 1 && !0;
    var4 = 0;
    var5 = 1;
    var6 = var3 && 0;

    result1 = (var1 && var2) && (40 % 3 > 45) || (var5 && var6);
    result2 = (var1 || var2) || (result1 && 0);
    result3 = (var1 && result1) || result2 || var5;
    result4 = (var1 || var2) || ((var3 && var1) && 0);
    result5 = (var1 && var2) && (result3 || var1);
    result6 = ((var3 || (!var2)) && (result5)) || 1;
    result7 = (var4 && result1) && ((result1 && 0) || 1);
    result8 = ((var1 && result3) && ((!var5) || var6)) && 1;
    result9 = ((result2 && var2) || ((!result7) && var1)) && !0;
    result10 = !(var1 && 1);
    
    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);
    printf("var3: %d\n", var3);
    printf("var4: %d\n", var4);
    printf("var5: %d\n", var5);
    printf("result6: %d\n", result6);
    printf("result7: %d\n", result7);
    printf("result8: %d\n", result8);
    printf("result9: %d\n", result9);
    printf("result10: %d\n", result10);
    printf("result6: %d\n", result6);
    
    return 0;
}
