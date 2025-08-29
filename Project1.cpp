#include <iostream>
#include <string>


void Letter_count (std::string paragraph, std::string paragraph2) {
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;

    for (int mk = 0; mk < paragraph.length(); ++mk) {
        if (paragraph[mk] == 'a') {
            a++;
        }
        else if (paragraph[mk] == 'b') {
            b++;
        }
        else if (paragraph[mk] == 'c') {
            c++;
        }
        else if (paragraph[mk] == 'd') {
            d++;
        }
        else if (paragraph[mk] == 'e') {
            e++;
        }
        else if (paragraph[mk] == 'f') {
            f++;
        }
        else if (paragraph[mk] == 'g') {
            g++;
        }
        else if (paragraph[mk] == 'h') {
            h++;
        }
        else if (paragraph[mk] == 'i') {
            i++;
        }
        else if (paragraph[mk] == 'j') {
            j++;
        }
        else if (paragraph[mk] == 'k') {
            k++;
        }
        else if (paragraph[mk] == 'l') {
            l++;
        }
        else if (paragraph[mk] == 'm') {
            m++;
        }
        else if (paragraph[mk] == 'n') {
            n++;
        }
        else if (paragraph[mk] == 'o') {
            o++;
        }
        else if (paragraph[mk] == 'p') {
            p++;
        }
        else if (paragraph[mk] == 'q') {
            q++;
        }
        else if (paragraph[mk] == 'r') {
            r++;
        }
        else if (paragraph[mk] == 's') {
            s++;
        }
        else if (paragraph[mk] == 't') {
            t++;
        }
        else if (paragraph[mk] == 'u') {
            u++;
        }
        else if (paragraph[mk] == 'v') {
            v++;
        }
        else if (paragraph[mk] == 'w') {
            w++;
        }
        else if (paragraph[mk] == 'x') {
            x++;
        }
        else if (paragraph[mk] == 'y') {
            y++;
        }
         else if (paragraph[mk] == 'z') {
            z++;
         }

    }
    for(int mk = 0; mk < paragraph2.length(); ++mk) {
        if (paragraph2[mk] == 'a') {
            a++;
        }
        else if (paragraph2[mk] == 'b') {
            b++;
        }
        else if (paragraph2[mk] == 'c') {
            c++;
        }
        else if (paragraph2[mk] == 'd') {
            d++;
        }
        else if (paragraph2[mk] == 'e') {
            e++;
        }
        else if (paragraph2[mk] == 'f') {
            f++;
        }
        else if (paragraph2[mk] == 'g') {
            g++;
        }
        else if (paragraph2[mk] == 'h') {
            h++;
        }
        else if (paragraph2[mk] == 'i') {
            i++;
        }
        else if (paragraph2[mk] == 'j') {
            j++;
        }
        else if (paragraph2[mk] == 'k') {
            k++;
        }
        else if (paragraph2[mk] == 'l') {
            l++;
        }
        else if (paragraph2[mk] == 'm') {
            m++;
        }
        else if (paragraph2[mk] == 'n') {
            n++;
        }
        else if (paragraph2[mk] == 'o') {
            o++;
        }
        else if (paragraph2[mk] == 'p') {
            p++;
        }
        else if (paragraph2[mk] == 'q') {
            q++;
        }
        else if (paragraph2[mk] == 'r') {
            r++;
        }
        else if (paragraph2[mk] == 's') {
            s++;
        }
        else if (paragraph2[mk] == 't') {
            t++;
        }
        else if (paragraph2[mk] == 'u') {
            u++;
        }
        else if (paragraph2[mk] == 'v') {
            v++;
        }
        else if (paragraph2[mk] == 'w') {
            w++;
        }
        else if (paragraph2[mk] == 'x') {
            x++;
        }
        else if (paragraph2[mk] == 'y') {
            y++;
        }
         else if (paragraph2[mk] == 'z') {
            z++;
         }

    }




    
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "k: " << k << std::endl;
    std::cout << "l: " << l << std::endl;
    std::cout << "m: " << m << std::endl;
    std::cout << "n: " << n << std::endl;
    std::cout << "o: " << o << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "q: " << q << std::endl;
    std::cout << "r: " << r << std::endl;
    std::cout << "s: " << s << std::endl;
    std::cout << "t: " << t << std::endl;
    std::cout << "u: " << u << std::endl;
    std::cout << "v: " << v << std::endl;
    std::cout << "w: " << w << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

}


void LF_Decrypter(std::string paragraph) {
    for (int i = 0; i < paragraph.length(); ++i) {
        
        if(paragraph[i] == 'b'){
            std::cout << 't';}
        else if(paragraph[i] == 'p'){
            std::cout << 'h';}
        else if(paragraph[i] == 'r'){
            std::cout << 'e';}
        else if(paragraph[i] == 'w'){
            std::cout << 'i';}
        else if(paragraph[i] =='m'){
            std::cout << 'a';}
        else if(paragraph[i] == 'j'){
            std::cout << 'o';}
        else if (paragraph[i] == 'x'){
            std::cout<< 'f';}
        else if (paragraph[i] == 'i'){
            std::cout << 's';}
        else if (paragraph[i] =='k'){
            std::cout<< 'n';}

        else if(paragraph[i] == 'y'){ //yastery
            std::cout << 'm';}
        else if(paragraph[i] == 't'){ //eas+
            std::cout << 'y';}
        else if(paragraph[i] == 'a'){ //e*plain
            std::cout << 'x';}
        else if(paragraph[i] == 'u'){ //*uactice
            std::cout << 'r';}
        else if(paragraph[i] == 's'){ //*ractice
            std::cout << 'p';}
        else if(paragraph[i] == 'l'){ //lecause
            std::cout << 'b';}
        else if(paragraph[i] == 'n'){ //foc*s
            std::cout << 'u';}
        else if(paragraph[i] == 'e'){ //have
            std::cout << 'v';}
        else if(paragraph[i] == 'v'){ //each
            std::cout << 'c';}
        else if(paragraph[i] == 'o'){ //significance
            std::cout << 'g';}
        else if(paragraph[i] == 'h'){ //enlightene*
            std::cout << 'l';}
        else if(paragraph[i] == 'd'){
            std::cout << 'd';}


        else if(paragraph[i] == 'r'){ //*ualified
            std::cout << 'q';}    
        else if(paragraph[i] == 'g'){
            std::cout << 'z';}
        else if(paragraph[i] == 'q'){ //tas*
            std::cout << 'k';}
        else if(paragraph[i] == 'c'){
            std::cout << 'w';}
        else if(paragraph[i] == 'f'){
            std::cout << 'q';}


        else if(paragraph[i]== 't'||paragraph[i] == 'b'|| paragraph[i] =='h'||paragraph[i] == 'p'|| paragraph[i] =='e'||paragraph[i] == 'r'|| paragraph[i] =='w'
            ||paragraph[i] == 's'|| paragraph[i] =='a'|| paragraph[i]=='m'||paragraph[i] == 'q'|| paragraph[i] =='d'|| paragraph[i]=='o'|| paragraph[i]=='j'
            ||paragraph[i] == 'x'||paragraph[i] == 'f'|| paragraph[i]=='i'|| paragraph[i]=='s'|| paragraph[i]=='n') {
            std::cout << "*";

        }
        else{
            std::cout << paragraph[i];
        }





        if (paragraph[i] == ' '&& paragraph[i+1] == ' ') {
            std::cout << std::endl;
            i++;
        }

        }
            
        

    }



int main() {




std::string paragraph1 = "  lrvmnir bpr sumvbwvr jx bpr lmiwv yjeryrkbi jx qmbm wi bpr xjvni mkd ymibrut  "
"jx irhx wi bpr riirkvr jx ymbinlmtmipw utn qmumbr dj w ipmhh but bj rhnvwdmbr bpr yjeryrkbi jx bpr qmbm  "  
"mvvjudwko bj yt wkbrusurbmbwjk lmird jk xjubt trmui jx ibndt  ";


LF_Decrypter(paragraph1);


std::string paragraph2= "  wb wi kjb mk rmit bmiq bj rashmwk rmvp yjeryrkb mkd wbi iwokwxwvmkvr mkd ijyr ynib urymwk nkrashmwkrd bj ower m vjyshrbr  "
" rashmkmbwjk jkr cjnhd pmer bj lr fnmhwxwrd mkd wkiswurd bj invp mk rabrkb bpmb pr vjnhd urmvp bpr ibmbr jx rkhwopbrkrd ywkd vmsmlhr jx urvjokwgwko  "
" ijnkdhrii ijnkd mkd ipmsrhrii ipmsr w dj kjb drry ytirhx bpr xwkmh mnbpjuwbt lnb yt rasruwrkvr cwbp qmbm pmi hrxb kj djnlb bpmb bpr xjhhjcwko wi bpr  "
"sujsru msshwvmbwjk mkd wkbrusurbmbwjk w jxxru yt bprjuwri wk bpr pjsr bpmb bpr riirkvr jx jqwkmcmk qmumbr cwhh urymwk wkbmvb  "; 

LF_Decrypter(paragraph2);

//Letter_count(paragraph1, paragraph2);

return 0;


}

    