# kidhexarus

Simple tool to convert modifiers and stars to their respective hex values. Most of the inputs have to be abreviations, such as dcs+1, scs+3, ipab-3. Mods that only have one word in them must be written as they are (except for paralysis and petrification, para and petri, respectively. The input must be one word, no spaces between the +/- and the mod/number.




Some rather exceptional mods:
Paralysis:para
Petrification:petri
Walking Speed:ws
Running Speed:rs
Status resistance:stat

If you don't know any abreviations, feel free to look at the code, it should be simple enough to understand.

//Backward-dash ch. shot

char bdcs1[20] = "bdcs+1";

if(strcmp(bdcs1,mod1)==0){
        printf("15\n");}

In the above fragment of code, the full name of the modifier is commented out, and bellow it is the code for the different inputs/respones. The first line contains the input inside the "quotes".
