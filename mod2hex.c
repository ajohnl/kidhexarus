#include <stdio.h>
#include <string.h>
int main()
{
printf("Welcome to mod2hex, a free program poorly written by the guy who ruined Miiverse.\nAfter getting your result you may input again.\n");
char mod1[20];
char exit[20] = "exit";

printf("\nInsert a modifier or star amount to convert, or exit to close mod2hex.\n");

begin:
scanf("%s", mod1);

if(strcmp(mod1,exit)==0){

	printf("Thank you for using mod2hex!\nPress enter to leave for good.\n");
	getchar();
	getchar();
	return 0;}

char scs1[20] = "scs+1"; //Standing ch. shot

if(strcmp(scs1,mod1)==0){
	printf("01\n");}

char senpai[20] = "noticemesenpai";
if(strcmp(senpai,mod1)==0){
	char name[20];
	printf("State thine name\n");
	scanf("%s", name);
	printf("Viridifan has noticed %s. \n",name);
}

char scs2[20] = "scs+2";
if(strcmp(scs2,mod1)==0){
	printf("02\n");}

char scs3[20] = "scs+3";
if (strcmp(scs3,mod1)==0){
        printf("03\n");}

char scs4[20] = "scs+4";
if (strcmp(scs4,mod1)==0){
        printf("04\n");}

char scsneg1[20] = "scs-1\n";
if (strcmp(scsneg1,mod1)==0){
        printf("05");}


char scsneg2[20] = "scs-2";

if(strcmp(scsneg2,mod1)==0){
        printf("06\n");}

char dcs1[20] = "dcs+1"; //Dash ch. shot

if(strcmp(dcs1,mod1)==0){
        printf("07\n");}

char dcs2[20] = "dcs+2";

if(strcmp(dcs2,mod1)==0){
        printf("08\n");}

char dcs3[20] = "dcs+3";

if(strcmp(dcs3,mod1)==0){
        printf("09\n");}

char dcs4[20] = "dcs+4";

if(strcmp(dcs4,mod1)==0){
        printf("0A\n");}

char dcsneg1[20] = "dcs-1";

if(strcmp(dcsneg1,mod1)==0){
        printf("0B\n");}

char dcsneg2[20] = "dcs-2";

if(strcmp(dcsneg2,mod1)==0){
        printf("0C\n");}

//Forward-dash ch. shot

char fdcs1[20] = "fdcs+1";

if(strcmp(fdcs1,mod1)==0){
        printf("0D\n");}

char fdcs2[20] = "fdcs+2";

if(strcmp(fdcs2,mod1)==0){
        printf("0E\n");}

char fdcs3[20] = "fdcs+3";

if(strcmp(fdcs3,mod1)==0){
        printf("0F\n");}

char fdcs4[20] = "fdcs+4";

if(strcmp(fdcs4,mod1)==0){
        printf("10\n");}

//Side-dash ch. shot


char sdcs1[20] = "sdcs+1";

if(strcmp(sdcs1,mod1)==0){
        printf("11\n");}

char sdcs2[20] = "sdcs+2";

if(strcmp(sdcs2,mod1)==0){
	printf("12\n");}

char sdcs3[20] = "sdcs+3";

if(strcmp(sdcs3,mod1)==0){
	printf("13\n");}

char sdcs4[20] = "sdcs+4";

if(strcmp(sdcs4,mod1)==0){
	printf("14\n");}


//Backward-dash ch. shot

char bdcs1[20] = "bdcs+1";

if(strcmp(bdcs1,mod1)==0){
        printf("15\n");}

char bdcs2[20] = "bdcs+2";

if(strcmp(bdcs2,mod1)==0){
        printf("16\n");}


char bdcs3[20] = "bdcs+3";

if(strcmp(bdcs3,mod1)==0){
        printf("17\n");}

char bdcs4[20] = "bdcs+4";

if(strcmp(bdcs4,mod1)==0){
        printf("18\n");}

//Standing cont. fire
char scf1[20] = "scf+1";

if(strcmp(scf1,mod1)==0){
        printf("19\n");}

char scf2[20] = "scf+2";

if(strcmp(scf2,mod1)==0){
        printf("1A\n");}

char scf3[20] = "scf+3";

if(strcmp(scf3,mod1)==0){
        printf("1B\n");}

char scf4[20] = "scf+4";

if(strcmp(scf4,mod1)==0){
        printf("1C\n");}

char scfneg1[20] = "scf-1";

if(strcmp(scfneg1,mod1)==0){
        printf("1D\n");}

char scfneg2[20] = "scf-2";

if(strcmp(scfneg2,mod1)==0){
        printf("1E\n");}

//Dash cont. fire
char dcf1[20] = "dcf+1";

if(strcmp(dcf1,mod1)==0){
        printf("1F\n");}

char dcf2[20] = "dcf+2";

if(strcmp(dcf2,mod1)==0){
        printf("20\n");}

char dcf3[20] = "dcf+3";

if(strcmp(dcf3,mod1)==0){
        printf("21\n");}

char dcf4[20] = "dcf+4";

if(strcmp(dcf4,mod1)==0){
        printf("22\n");}

char dcfneg1[20] = "dcf-1";

if(strcmp(dcfneg1,mod1)==0){
        printf("23\n");}

char dcfneg2[20] = "dcf-21";

if(strcmp(dcfneg2,mod1)==0){
        printf("24\n");}

//Forward-dash cont. fire

char fdcf1[20] = "fdcf+1";

if(strcmp(fdcf1,mod1)==0){
        printf("25\n");}

	char fdcf2[20] = "fdcf+2";

	if(strcmp(fdcf2,mod1)==0){
	        printf("26\n");}

		char fdcf3[20] = "fdcf+3";

		if(strcmp(fdcf3,mod1)==0){
		        printf("27\n");}

char fdcf4[20] = "fdcf+4";

                if(strcmp(fdcf4,mod1)==0){
		                        printf("28\n");}


//Side-dash cont. fire

char sdcf1[20] = "sdcf+1";

if(strcmp(sdcf1,mod1)==0){
        printf("29\n");}

char sdcf2[20] = "sdcf+2";

if(strcmp(sdcf2,mod1)==0){
        printf("2A\n");}

char sdcf3[20] = "sdcf+3";

if(strcmp(sdcf3,mod1)==0){
        printf("2B\n");}

char sdcf4[20] = "sdcf+4";

if(strcmp(sdcf4,mod1)==0){
        printf("2C\n");}

//Backward-dash cont. fire

char bdcf1[20] = "bdcf+1";

if(strcmp(bdcf1,mod1)==0){
        printf("2D\n");}

char bdcf2[20] = "bdcf+2";

if(strcmp(bdcf2,mod1)==0){
        printf("2E\n");}

char bdcf3[20] = "bdcf+3";

if(strcmp(bdcf3,mod1)==0){
        printf("2F\n");}

char bdcf4[20] = "bdcf+4";

if(strcmp(bdcf4,mod1)==0){
        printf("30\n");}

//Melee combo


char mc1[20] = "mc+1";

if(strcmp(mc1,mod1)==0){
        printf("31\n");}

char mc2[20] = "mc+2";

if(strcmp(mc2,mod1)==0){
        printf("32\n");}

char mc3[20] = "mc+3";

if(strcmp(mc3,mod1)==0){
        printf("33\n");}

char mc4[20] = "mc+4";

if(strcmp(mc4,mod1)==0){
        printf("34\n");}

char mcneg1[20] = "mc-1";

if(strcmp(mcneg1,mod1)==0){
        printf("35\n");}

char mcneg2[20] = "mc-2";

if(strcmp(mcneg2,mod1)==0){
        printf("36\n");}



//Melee Dash Attack

char mda1[20] = "mda+1";

if(strcmp(mda1,mod1)==0){
        printf("37\n");}

char mda2[20] = "mda+2";

if(strcmp(mda2,mod1)==0){
        printf("38\n");}

char mda3[20] = "mda+3";

if(strcmp(mda3,mod1)==0){
        printf("39\n");}

char mda4[20] = "mda+4";

if(strcmp(mda4,mod1)==0){
        printf("3A\n");}

char mdaneg1[20] = "mda-1";

if(strcmp(mdaneg1,mod1)==0){
        printf("3B\n");}

char mdaneg2[20] = "mda-2";

if(strcmp(mdaneg2,mod1)==0){
        printf("3C\n");}

//Item Attack

char ia1[20] = "ia+1";

if(strcmp(ia1,mod1)==0){
        printf("3D\n");}

char ia2[20] = "ia+2";

if(strcmp(ia2,mod1)==0){
        printf("3E\n");}

char ia3[20] = "ia+3";

if(strcmp(ia3,mod1)==0){
        printf("3F\n");}

char ia4[20] = "ia+4";

if(strcmp(ia4,mod1)==0){
        printf("40\n");}


//Power Attack

char pa1[20] = "pa+1";

if(strcmp(pa1,mod1)==0){
        printf("41\n");}

char pa2[20] = "pa+2";

if(strcmp(pa2,mod1)==0){
        printf("42\n");}

char pa3[20] = "pa+3";

if(strcmp(pa3,mod1)==0){
        printf("43\n");}

char pa4[20] = "pa+4";

if(strcmp(pa4,mod1)==0){
        printf("44\n");}

//Health

char health1[20] = "health+1";

if(strcmp(health1,mod1)==0){
        printf("45\n");}

char health2[20] = "health+2";

if(strcmp(health2,mod1)==0){
        printf("46\n");}

char health3[20] = "health+3";

if(strcmp(health3,mod1)==0){
        printf("47\n");}

char health4[20] = "health+4";

if(strcmp(health4,mod1)==0){
        printf("48\n");}

char health5[20] = "health+5";

if(strcmp(health5,mod1)==0){
        printf("49\n");}

char health6[20] = "health+6";

if(strcmp(health6,mod1)==0){
        printf("4A\n");}

char healthneg1[20] = "health-1";

if(strcmp(healthneg1,mod1)==0){
        printf("4B\n");}

char healthneg2[20] = "health-2";

if(strcmp(healthneg2,mod1)==0){
        printf("4C\n");}

char healthneg3[20] = "health-3";

if(strcmp(healthneg3,mod1)==0){
        printf("4D\n");}

char healthneg4[20] = "health-4";

if(strcmp(healthneg4,mod1)==0){
        printf("4E\n");}

//Stamina

char stamina1[20] = "stamina+1";

if(strcmp(stamina1,mod1)==0){
        printf("4F\n");}

char stamina2[20] = "stamina+2";

if(strcmp(stamina2,mod1)==0){
        printf("50\n");}

char stamina3[20] = "stamina+3";

if(strcmp(stamina3,mod1)==0){
        printf("51\n");}

char stamina4[20] = "stamina+4";

if(strcmp(stamina4,mod1)==0){
        printf("52\n");}

//Speed

char speed1[20] = "speed+1";

if(strcmp(speed1,mod1)==0){
        printf("53\n");}

char speed2[20] = "speed+2";

if(strcmp(speed2,mod1)==0){
        printf("54\n");}

char speed3[20] = "speed+3";

if(strcmp(speed3,mod1)==0){
        printf("55\n");}

char speed4[20] = "speed+4";

if(strcmp(speed4,mod1)==0){
        printf("56\n");}

char speedneg1[20] = "speed-1";

if(strcmp(speedneg1,mod1)==0){
        printf("57\n");}

char speedneg2[20] = "speed-2";

if(strcmp(speedneg2,mod1)==0){
        printf("58\n");}

char speedneg3[20] = "speed-3";

if(strcmp(speedneg3,mod1)==0){
        printf("59\n");}

char speedneg4[20] = "speed-4";

if(strcmp(speedneg4,mod1)==0){
        printf("5A\n");}

char walkspeed1[20] = "walkspeed+1";

if(strcmp(walkspeed1,mod1)==0){
        printf("5B\n");}

char walkspeed2[20] = "walkspeed+2";

if(strcmp(walkspeed2,mod1)==0){
        printf("5C\n");}

char walkspeed3[20] = "walkspeed+3";

if(strcmp(walkspeed3,mod1)==0){
        printf("5D\n");}

char walkspeed4[20] = "walk speed+4";

if(strcmp(walkspeed4,mod1)==0){
        printf("5E\n");}

char runspeed1[20] = "runspeed+1";

if(strcmp(runspeed1,mod1)==0){
        printf("5F\n");}

char runspeed2[20] = "runspeed+2";

if(strcmp(runspeed2,mod1)==0){
        printf("60\n");}

char runspeed3[20] = "runspeed+3";

if(strcmp(runspeed3,mod1)==0){
        printf("61\n");}

char runspeed4[20] = "runspeed+4";

if(strcmp(runspeed4,mod1)==0){
        printf("62\n");}

//Evasion

char evasion1[20] = "evasion+1";

if(strcmp(evasion1,mod1)==0){
        printf("63\n");}

char evasion2[20] = "evasion+2";

if(strcmp(evasion2,mod1)==0){
        printf("64\n");}

char evasion3[20] = "evasion+3";

if(strcmp(evasion3,mod1)==0){
        printf("65\n");}

char evasion4[20] = "evasion+4";

if(strcmp(evasion4,mod1)==0){
        printf("66\n");}

//Shot Defense

char sd1[20] = "sd+1";

if(strcmp(sd1,mod1)==0){
        printf("67\n");}

char sd2[20] = "sd+2";

if(strcmp(sd2,mod1)==0){
        printf("68\n");}

char sd3[20] = "sd+3";

if(strcmp(sd3,mod1)==0){
        printf("69\n");}

char sd4[20] = "sd+4";

if(strcmp(sd4,mod1)==0){
        printf("6A\n");}

char sdneg1[20] = "sd-1";

if(strcmp(sdneg1,mod1)==0){
        printf("6B\n");}

char sdneg2[20] = "sd-2";

if(strcmp(sdneg2,mod1)==0){
        printf("6C\n");}

//Melee Defense

char md1[20] = "md+1";

if(strcmp(md1,mod1)==0){
        printf("6D\n");}

char md2[20] = "md+2";

if(strcmp(md2,mod1)==0){
        printf("6E\n");}

char md3[20] = "md+3";

if(strcmp(md3,mod1)==0){
        printf("6F\n");}

char md4[20] = "md+4";

if(strcmp(md4,mod1)==0){
        printf("70\n");}

char mdneg1[20] = "md-1";

if(strcmp(mdneg1,mod1)==0){
        printf("71\n");}

char mdneg2[20] = "md-2";

if(strcmp(mdneg2,mod1)==0){
        printf("72\n");}

//Knockback Defense +1

char kd1[20] = "kd+1";

if(strcmp(kd1,mod1)==0){
        printf("73\n");}

char kd2[20] = "kd+2";

if(strcmp(kd2,mod1)==0){
        printf("74\n");}

char kd3[20] = "kd+3";

if(strcmp(kd3,mod1)==0){
        printf("75\n");}

char kd4[20] = "kd+4";

if(strcmp(kd4,mod1)==0){
        printf("76\n");}

//Status resistance

char statres1[20] = "status resistance+1";

if(strcmp(statres1,mod1)==0){
        printf("77\n");}

char statres2[20] = "status resistance+2";

if(strcmp(statres2,mod1)==0){
        printf("78\n");}

char statres3[20] = "status resistance+3";

if(strcmp(statres3,mod1)==0){
        printf("79\n");}

char statres4[20] = "status resistance+4";

if(strcmp(statres4,mod1)==0){
        printf("7A\n");}

char statresneg1[20] = "status resistance-1";

if(strcmp(statresneg1,mod1)==0){
        printf("7B\n");}

char statresneg2[20] = "status resistance-2";

if(strcmp(statresneg2,mod1)==0){
        printf("7C\n");}

char statresneg3[20] = "status resistance-3";

if(strcmp(statresneg3,mod1)==0){
        printf("7D\n");}

char statresneg4[20] = "status resistance-4";

if(strcmp(statresneg4,mod1)==0){
        printf("7E\n");}

//Overall Defense

char od1[20] = "od+1";

if(strcmp(od1,mod1)==0){
        printf("7F\n");}

char od2[20] = "od+2";

if(strcmp(od2,mod1)==0){
        printf("80\n");}

char od3[20] = "od+3";

if(strcmp(od3,mod1)==0){
        printf("81\n");}

char od4[20] = "od+4";

if(strcmp(od4,mod1)==0){
        printf("82\n");}

char od5[20] = "od+5";

if(strcmp(od5,mod1)==0){
        printf("83\n");}

char od6[20] = "od+6";

if(strcmp(od6,mod1)==0){
        printf("84\n");}

char od7[20] = "od+7";

if(strcmp(od7,mod1)==0){
        printf("85\n");}

char od8[20] = "od+8";

if(strcmp(od8,mod1)==0){
        printf("86\n");}

char odneg1[20] = "od-1";

if(strcmp(odneg1,mod1)==0){
        printf("87\n");}

char odneg2[20] = "od-2";

if(strcmp(odneg2,mod1)==0){
        printf("88\n");}

char odneg3[20] = "od-3";

if(strcmp(odneg3,mod1)==0){
        printf("89\n");}

char odneg4[20] = "od-4";

if(strcmp(odneg4,mod1)==0){
        printf("8A\n");}

//Recovery effect
char re1[20] = "re+1";

if(strcmp(re1,mod1)==0){
        printf("8B\n");}

char re2[20] = "re+2";

if(strcmp(re2,mod1)==0){
        printf("8C\n");}

char re3[20] = "re+3";

if(strcmp(re3,mod1)==0){
        printf("8D\n");}

char re4[20] = "re+4";

if(strcmp(re4,mod1)==0){
        printf("8E\n");}

//Effect Duration

char ed1[20] = "ed+1";

if(strcmp(ed1,mod1)==0){
        printf("8F\n");}

char ed2[20] = "ed+2";

if(strcmp(ed2,mod1)==0){
        printf("90\n");}

char ed3[20] = "ed+3";

if(strcmp(ed3,mod1)==0){
        printf("91\n");}

char ed4[20] = "ed+4";

if(strcmp(ed4,mod1)==0){
        printf("92\n");}

//Poison

char poison1[20] = "poison+1";

if(strcmp(poison1,mod1)==0){
        printf("93\n");}

char poison2[20] = "poison+2";

if(strcmp(poison2,mod1)==0){
        printf("94\n");}

char poison3[20] = "poison+3";

if(strcmp(poison3,mod1)==0){
        printf("95\n");}

char poison4[20] = "poison+4";

if(strcmp(poison4,mod1)==0){
        printf("96\n");}

//Paralysis

char para1[20] = "para+1";

if(strcmp(para1,mod1)==0){
        printf("97\n");}

char para2[20] = "para+2";

if(strcmp(para2,mod1)==0){
        printf("98\n");}

char para3[20] = "para+3";

if(strcmp(para3,mod1)==0){
        printf("99\n");}

char para4[20] = "para+4";

if(strcmp(para4,mod1)==0){
        printf("9A\n");}

//Weakening

char weak1[20] = "weakening+1";

if(strcmp(weak1,mod1)==0){
        printf("9B\n");}

char weak2[20] = "weakening+2";

if(strcmp(weak2,mod1)==0){
        printf("9C\n");}

char weak3[20] = "weakening+3";

if(strcmp(weak3,mod1)==0){
        printf("9D\n");}

char weak4[20] = "weakening+4";

if(strcmp(weak4,mod1)==0){
        printf("9E\n");}

//Petrification

char petri1[20] = "petri+1";

if(strcmp(petri1,mod1)==0){
        printf("9F\n");}

char petri2[20] = "petri+2";

if(strcmp(petri2,mod1)==0){
        printf("A0\n");}

char petri3[20] = "petri+3";

if(strcmp(petri3,mod1)==0){
        printf("A1\n");}

char petri4[20] = "petri+4";

if(strcmp(petri4,mod1)==0){
        printf("A2\n");}

//Shaking

char shake1[20] = "shaking+1";

if(strcmp(shake1,mod1)==0){
        printf("A3\n");}

char shake2[20] = "shaking+2";

if(strcmp(shake2,mod1)==0){
        printf("A4\n");}

char shake3[20] = "shaking+3";

if(strcmp(shake3,mod1)==0){
        printf("A5\n");}

char shake4[20] = "shaking+4";

if(strcmp(shake4,mod1)==0){
        printf("A6\n");}

//Confusion

char conf1[20] = "confusion+1";

if(strcmp(conf1,mod1)==0){
        printf("A7\n");}

char conf2[20] = "confusion+2";

if(strcmp(conf2,mod1)==0){
        printf("A8\n");}

char conf3[20] = "confusion+3";

if(strcmp(conf3,mod1)==0){
        printf("A9\n");}

char conf4[20] = "confusion+4";

if(strcmp(conf4,mod1)==0){
        printf("AA\n");}

//Burning

char burn1[20] = "burning+1";

if(strcmp(burn1,mod1)==0){
        printf("AB\n");}

char burn2[20] = "burning+2";

if(strcmp(burn2,mod1)==0){
        printf("AC\n");}

char burn3[20] = "burning+3";

if(strcmp(burn3,mod1)==0){
        printf("AD\n");}

char burn4[20] = "burning+4";

if(strcmp(burn4,mod1)==0){
        printf("AE\n");}

//Freezing

char freeze1[20] = "freezing+1";

if(strcmp(freeze1,mod1)==0){
        printf("AF\n");}

char freeze2[20] = "freezing+2";

if(strcmp(freeze2,mod1)==0){
        printf("B0\n");}

char freeze3[20] = "freezing+3";

if(strcmp(freeze3,mod1)==0){
        printf("B1\n");}

char freeze4[20] = "freezing+4";

if(strcmp(freeze4,mod1)==0){
        printf("B2\n");}

//Shot Range

char sr1[20] = "sr+1";

if(strcmp(sr1,mod1)==0){
        printf("B3\n");}

char sr2[20] = "sr+2";

if(strcmp(sr2,mod1)==0){
        printf("B4\n");}

char sr3[20] = "sr+3";

if(strcmp(sr3,mod1)==0){
        printf("B5\n");}

char srneg1[20] = "sr-1";

if(strcmp(srneg1,mod1)==0){
        printf("B6\n");}

char srneg2[20] = "sr-2";

if(strcmp(srneg2,mod1)==0){
        printf("B7\n");}

char srneg3[20] = "sr-3";

if(strcmp(srneg3,mod1)==0){
        printf("B8\n");}

//Shot Homing

char sh1[20] = "sh+1";

if(strcmp(sh1,mod1)==0){
        printf("B9\n");}

char sh2[20] = "sh+2";

if(strcmp(sh2,mod1)==0){
        printf("BA\n");}

char sh3[20] = "sh+3";

if(strcmp(sh3,mod1)==0){
        printf("BB\n");}

char shneg1[20] = "sh-1";

if(strcmp(shneg1,mod1)==0){
        printf("BC\n");}

char shneg2[20] = "sh-2";

if(strcmp(shneg2,mod1)==0){
        printf("BD\n");}

char shneg3[20] = "sh-3";

if(strcmp(shneg3,mod1)==0){
        printf("BE\n");}

//Shot Cancelation

char sc1[20] = "sc+1";

if(strcmp(sc1,mod1)==0){
        printf("BF\n");}

//Knockback Recovery

char kr1[20] = "kr+1";

if(strcmp(kr1,mod1)==0){
        printf("C0\n");}

//Auto-erotic Asphixiation

char si1[20] = "si-1";

if(strcmp(si1,mod1)==0){
        printf("C1\n");}

char si2[20] = "si-2";

if(strcmp(si2,mod1)==0){
        printf("C2\n");}

char si3[20] = "si-3";

if(strcmp(si3,mod1)==0){
        printf("C3\n");}

//Full-health boost

char fhb1[20] = "fhb+1";

if(strcmp(fhb1,mod1)==0){
        printf("C4\n");}

char fhb2[20] = "fhb+2";

if(strcmp(fhb2,mod1)==0){
        printf("C5\n");}

char fhb3[20] = "fhb+3";

if(strcmp(fhb3,mod1)==0){
        printf("C6\n");}

char fhb4[20] = "fhb+4";

if(strcmp(fhb4,mod1)==0){
        printf("C7\n");}

char fhb5[20] = "fhb+5";

if(strcmp(fhb5,mod1)==0){
        printf("C8\n");}

char fhb6[20] = "fhb+6";

if(strcmp(fhb6,mod1)==0){
        printf("C9\n");}

//In Peril Auto-Dodge (iPad)

char /*ge*/ iPad1[20] = "ipad+1";

if(strcmp(iPad1,mod1)==0){
        printf("CA\n");}

char iPad2[20] = "ipad+2";

if(strcmp(iPad2,mod1)==0){
        printf("CB\n");}

char iPad3[20] = "ipad+3";

if(strcmp(iPad3,mod1)==0){
        printf("CC\n");}

// In Peril Attack Boost

char ipab1[20] = "ipab+1";

if(strcmp(ipab1,mod1)==0){
        printf("CD\n");}

char ipab2[20] = "ipab+2";

if(strcmp(ipab2,mod1)==0){
        printf("CE\n");}

char ipab3[20] = "ipab+3";

if(strcmp(ipab3,mod1)==0){
        printf("CF\n");}

char ipab4[20] = "ipab+4";

if(strcmp(ipab4,mod1)==0){
        printf("D0\n");}

char ipab5[20] = "ipab+5";

if(strcmp(ipab5,mod1)==0){
        printf("D1\n");}

char ipab6[20] = "ipab+6";

if(strcmp(ipab6,mod1)==0){
        printf("D2\n");}

char ipabneg1[20] = "ipab-1";

if(strcmp(ipabneg1,mod1)==0){
        printf("D3\n");}

char ipabneg2[20] = "ipab-2";

if(strcmp(ipabneg2,mod1)==0){
        printf("D4\n");}

char ipabneg3[20] = "ipab-3";

if(strcmp(ipabneg3,mod1)==0){
        printf("D5\n");}

char ipabneg4[20] = "ipab-4";

if(strcmp(ipabneg4,mod1)==0){
        printf("D6\n");}

//Heart Bonus

char hb1[20] = "hb+1";

if(strcmp(hb1,mod1)==0){
        printf("D7\n");}

char hb2[20] = "hb+2";

if(strcmp(hb2,mod1)==0){
        printf("D8\n");}

char hb3[20] = "hb+3";

if(strcmp(hb3,mod1)==0){
        printf("D9\n");}

char hbneg1[20] = "hb-1";

if(strcmp(hbneg1,mod1)==0){
        printf("DA\n");}

char hbneg2[20] = "hb-2";

if(strcmp(hbneg2,mod1)==0){
        printf("DB\n");}

char hbneg3[20] = "hb-3";

if(strcmp(hbneg3,mod1)==0){
        printf("DC\n");}

//Dem ranged starz tho

char s05r[20] = "0.5r";

if(strcmp(s05r,mod1)==0){
        printf("01\n");}

char s10r[20] = "1r";

if(strcmp(s10r,mod1)==0){
        printf("02\n");}

char s15r[20] = "1.5r";

if(strcmp(s15r,mod1)==0){
        printf("03\n");}

char s20r[20] = "2r";

if(strcmp(s20r,mod1)==0){
        printf("04\n");}


char s25r[20] = "2.5r";

if(strcmp(s25r,mod1)==0){
        printf("05\n");}

char s30r[20] = "3r";

if(strcmp(s30r,mod1)==0){
        printf("06\n");}

char s35r[20] = "3.5r";

if(strcmp(s35r,mod1)==0){
        printf("07\n");}

char s40r[20] = "4r";

if(strcmp(s40r,mod1)==0){
        printf("08\n");}

char s45r[20] = "4.5r";

if(strcmp(s45r,mod1)==0){
        printf("09\n");}

char s50r[20] = "5r";

if(strcmp(s50r,mod1)==0){
        printf("0A\n");}

char s55r[20] = "5.5r";

if(strcmp(s55r,mod1)==0){
        printf("0B\n");}

char s60r[20] = "6r";

if(strcmp(s60r,mod1)==0){
        printf("0C\n");}

char neg05r[20] = "-0.5r";

if(strcmp(neg05r,mod1)==0){
        printf("0D\n");}

char neg10r[20] = "-1r";

if(strcmp(neg10r,mod1)==0){
        printf("0E\n");}

char neg15r[20] = "-1.5r";

if(strcmp(neg15r,mod1)==0){
        printf("0F\n");}


//Dem melee starz tho

char s05m[20] = "0.5m";

if(strcmp(s05m,mod1)==0){
        printf("11\n");}

char s10m[20] = "1m";

if(strcmp(s10m,mod1)==0){
        printf("12\n");}

char s15m[20] = "1.5m";

if(strcmp(s15m,mod1)==0){
        printf("13\n");}

char s20m[20] = "2m";

if(strcmp(s20m,mod1)==0){
        printf("14\n");}


char s25m[20] = "2.5m";

if(strcmp(s25m,mod1)==0){
        printf("15\n");}

char s30m[20] = "3m";

if(strcmp(s30m,mod1)==0){
        printf("16\n");}

char s35m[20] = "3.5m";

if(strcmp(s35m,mod1)==0){
        printf("17\n");}

char s40m[20] = "4m";

if(strcmp(s40m,mod1)==0){
        printf("18\n");}

char s45m[20] = "4.5m";

if(strcmp(s45m,mod1)==0){
        printf("19\n");}

char s50m[20] = "5m";

if(strcmp(s50m,mod1)==0){
        printf("1A\n");}

char s55m[20] = "5.5m";

if(strcmp(s55m,mod1)==0){
        printf("1B\n");}

char s60m[20] = "6m";

if(strcmp(s60m,mod1)==0){
        printf("1C\n");}

char neg05m[20] = "-0.5m";

if(strcmp(neg05m,mod1)==0){
        printf("1D\n");}

char neg10m[20] = "-1m";

if(strcmp(neg10m,mod1)==0){
        printf("1E\n");}

char neg15m[20] = "-1.5m";

if(strcmp(neg15m,mod1)==0){
        printf("0F\n");}

char zeror[20] = "0r";
if(strcmp(zeror,mod1)==0){
	printf("00, you fucking idiot\n");}	

char zerom[20] = "0m";
if(strcmp(zerom,mod1)==0){
        printf("00, are you proud of yourself??\n");}

/*	
printf("If you wish to mod2hex another mod, simply input it bellow, or input exit to close mod2hex\n");
*/
while(strcmp(mod1,exit)!=0){
	goto begin;}
}
