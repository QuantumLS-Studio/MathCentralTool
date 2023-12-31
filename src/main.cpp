﻿#include "./include/ecp.h"
#include "./plugins/calc.cpp"
#include "./plugins/maxn.cpp"
#include "./plugins/minn.cpp"
#include "./plugins/chn.cpp"
#include "./plugins/cg.cpp"

// Main function
int main(){
    clear();
    hy("集成数学工具");
    while(true){
        line("-",20,"yellow",true);
        dash("\033[1;34m(1)\033[34m计算器\033[0m");
        dash("\033[1;35m(2)\033[35m最大公约数\033[0m");
        dash("\033[1;36m(3)\033[36m最小公倍数\033[0m");
        dash("\033[1;32m(4)\033[32m数值分析器\033[0m");
        dash("\033[0m(a)关于\033[0m");
        dash("\033[1;33m(e)退出\033[0m");
        print("> ","white",false);
        cin >> q;
        if (q=='1')
            calc();
        if (q=='2')
            B();
        if (q=='3')
            C();
        if (q=='4')
            D();
	    if (q=='E'||q=='e')
		    break;
        if (q=='A'||q =='a'){
            clear();
            line("=",20,"blue",true);
            dash("MCT Stable v0.0.1.3");
            dash("Made by QuantumLS-Studio");
            dash("Url: https://github.com/QuantumLS-Studio/MathCentralTool");
            line("=",20,"blue",true);
        }
        else{
            clear();
            error();
        }
    }
	return 0;
}
