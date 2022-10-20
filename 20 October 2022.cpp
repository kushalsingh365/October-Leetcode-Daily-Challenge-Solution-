class Solution {
public:
string intToRoman(int num) {
return convert(num);
}

string convert(int &num){
    string s="";
    if(num>=1000){s+="M";num-=1000;return s+convert(num);}
    else if(num>=900){s+="CM";num-=900;return s+convert(num);}
    else if(num>=500){s+="D";num-=500;return s+convert(num);}
    else if(num>=400){s+="CD";num-=400;return s+convert(num);}
    else if(num>=100){s+="C";num-=100;return s+convert(num);}
    else if(num>=90){s+="XC";num-=90;return s+convert(num);}
    else if(num>=50){s+="L";num-=50;return s+convert(num);}
    else if(num>=40){s+="XL";num-=40;return s+convert(num);}
    else if(num>=10){s+="X";num-=10;return s+convert(num);}
    else if(num>=9){s+="IX";num-=9;return s+convert(num);}
    else if(num>=5){s+="V";num-=5;return s+convert(num);}
    else if(num>=4){s+="IV";num-=4;return s+convert(num);}
    else if(num>=1){s+="I";num-=1;return s+convert(num);}
    return s;
}
};
