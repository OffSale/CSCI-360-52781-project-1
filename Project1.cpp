#include <iostream>
#include <string>

void LF_Decrypter(std::string paragraph) {
    for (int i = 0; i < paragraph.length(); ++i) {
        
        if(paragraph[i] == 'b'){
            std::cout << 't';
        }else if(paragraph[i] == 'p'){
            std::cout << 'h';}
        else if(paragraph[i] == 'r'){
            std::cout << 'e';}
        else{
            std::cout << paragraph[i];
        }





        if (paragraph[i] == ' '&& paragraph[i+1] == ' ') {
            std::cout << std::endl;
            i+=2;
        }

        }
            
        

    }



int main() {




std::string paragraph1 = "lrvmnir bpr sumvbwvr jx bpr lmiwv yjeryrkbi jx qmbm wi bpr xjvni mkd ymibrut  "
" jx irhx wi bpr riirkvr jx ymbinlmtmipw utn qmumbr dj w ipmhh but bj rhnvwdmbr bpr yjeryrkbi jx bpr qmbm  "  
" mvvjudwko bj yt wkbrusurbmbwjk lmird jk xjubt trmui jx ibndt  ";

LF_Decrypter(paragraph1);


std::string paragraph2= "wb wi kjb mk rmit bmiq bj rashmwk rmvp yjeryrkb mkd wbi iwokwxwvmkvr mkd ijyr ynib  "
" urymwk nkrashmwkrd bj ower m vjyshrbr rashmkmbwjk jkr cjnhd pmer bj lr fnmhwxwrd mkd wkiswurd bj invp mk rabrkb  "
" bpmb pr vjnhd urmvp bpr ibmbr jx rkhwopbrkrd ywkd vmsmlhr jx urvjokwgwko ijnkdhrii ijnkd mkd ipmsrhrii ipmsr w dj  "
" kjb drry ytirhx bpr xwkmh mnbpjuwbt lnb yt rasruwrkvr cwbp qmbm pmi hrxb kj djnlb bpmb bpr xjhhjcwko wi bpr sujsru  "
" msshwvmbwjk mkd wkbrusurbmbwjk w jxxru yt bprjuwri wk bpr pjsr bpmb bpr riirkvr jx jqwkmcmk qmumbr cwhh urymwk wkbmvb  ";


return 0;


}

    