#include <stdio.h>
#include <string.h>











char mod1[20],hex[20];


void mod2hex(){ //Does all the calculatin' n' shit...input is mod1, output is hex.

begin:
scanf("%s",mod1);
char scs1[20] = "scs+1"; //Standing ch. shot

if(strcmp(scs1,mod1)==0){
strcpy(hex,"01");
}


char scs2[20] = "scs+2";
if(strcmp(scs2,mod1)==0){
strcpy(hex,"02");
}

char scs3[20] = "scs+3";
if (strcmp(scs3,mod1)==0){
strcpy(hex,"03");}

char scs4[20] = "scs+4";
if (strcmp(scs4,mod1)==0){
strcpy(hex,"04");}

char scsneg1[20] = "scs-1";
if (strcmp(scsneg1,mod1)==0){
strcpy(hex,"05");}


char scsneg2[20] = "scs-2";

if(strcmp(scsneg2,mod1)==0){
strcpy(hex,"06");}

char dcs1[20] = "dcs+1"; //Dash ch. shot

if(strcmp(dcs1,mod1)==0){
strcpy(hex,"07");}

char dcs2[20] = "dcs+2";

if(strcmp(dcs2,mod1)==0){
strcpy(hex,"08");}

char dcs3[20] = "dcs+3";

if(strcmp(dcs3,mod1)==0){
strcpy(hex,"09");}

char dcs4[20] = "dcs+4";

if(strcmp(dcs4,mod1)==0){
strcpy(hex,"0A");}

char dcsneg1[20] = "dcs-1";

if(strcmp(dcsneg1,mod1)==0){
strcpy(hex,"0B");}

char dcsneg2[20] = "dcs-2";

if(strcmp(dcsneg2,mod1)==0){
strcpy(hex,"0C");}

//Forward-dash ch. shot

char fdcs1[20] = "fdcs+1";

if(strcmp(fdcs1,mod1)==0){
strcpy(hex,"0D");}

char fdcs2[20] = "fdcs+2";

if(strcmp(fdcs2,mod1)==0){
strcpy(hex,"0E");}

char fdcs3[20] = "fdcs+3";

if(strcmp(fdcs3,mod1)==0){
strcpy(hex,"0F");}

char fdcs4[20] = "fdcs+4";

if(strcmp(fdcs4,mod1)==0){
strcpy(hex,"10");}

//Side-dash ch. shot


char sdcs1[20] = "sdcs+1";

if(strcmp(sdcs1,mod1)==0){
strcpy(hex,"11");}

char sdcs2[20] = "sdcs+2";

if(strcmp(sdcs2,mod1)==0){
strcpy(hex,"12");}

char sdcs3[20] = "sdcs+3";

if(strcmp(sdcs3,mod1)==0){
strcpy(hex,"13");}

char sdcs4[20] = "sdcs+4";

if(strcmp(sdcs4,mod1)==0){
strcpy(hex,"14");}


//Backward-dash ch. shot

char bdcs1[20] = "bdcs+1";

if(strcmp(bdcs1,mod1)==0){
strcpy(hex,"15");}

char bdcs2[20] = "bdcs+2";

if(strcmp(bdcs2,mod1)==0){
strcpy(hex,"16");}


char bdcs3[20] = "bdcs+3";

if(strcmp(bdcs3,mod1)==0){
strcpy(hex,"17");}

char bdcs4[20] = "bdcs+4";

if(strcmp(bdcs4,mod1)==0){
strcpy(hex,"18");}

//Standing cont. fire
char scf1[20] = "scf+1";

if(strcmp(scf1,mod1)==0){
strcpy(hex,"19");}

char scf2[20] = "scf+2";

if(strcmp(scf2,mod1)==0){
strcpy(hex,"1A");}

char scf3[20] = "scf+3";

if(strcmp(scf3,mod1)==0){
strcpy(hex,"1B");}

char scf4[20] = "scf+4";

if(strcmp(scf4,mod1)==0){
strcpy(hex,"1C");}

char scfneg1[20] = "scf-1";

if(strcmp(scfneg1,mod1)==0){
strcpy(hex,"1D");}

char scfneg2[20] = "scf-2";

if(strcmp(scfneg2,mod1)==0){
strcpy(hex,"1E");}

//Dash cont. fire
char dcf1[20] = "dcf+1";

if(strcmp(dcf1,mod1)==0){
strcpy(hex,"1F");}

char dcf2[20] = "dcf+2";

if(strcmp(dcf2,mod1)==0){
strcpy(hex,"20");}

char dcf3[20] = "dcf+3";

if(strcmp(dcf3,mod1)==0){
strcpy(hex,"21");}

char dcf4[20] = "dcf+4";

if(strcmp(dcf4,mod1)==0){
strcpy(hex,"22");}

char dcfneg1[20] = "dcf-1";

if(strcmp(dcfneg1,mod1)==0){
strcpy(hex,"23");}

char dcfneg2[20] = "dcf-2";

if(strcmp(dcfneg2,mod1)==0){
strcpy(hex,"24");}

//Forward-dash cont. fire

char fdcf1[20] = "fdcf+1";

if(strcmp(fdcf1,mod1)==0){
strcpy(hex,"25");}

char fdcf2[20] = "fdcf+2";

if(strcmp(fdcf2,mod1)==0){
	strcpy(hex,"26");}

	char fdcf3[20] = "fdcf+3";

	if(strcmp(fdcf3,mod1)==0){
		strcpy(hex,"27");}

char fdcf4[20] = "fdcf+4";

	if(strcmp(fdcf4,mod1)==0){
				strcpy(hex,"28");}


//Side-dash cont. fire

char sdcf1[20] = "sdcf+1";

if(strcmp(sdcf1,mod1)==0){
strcpy(hex,"29");}

char sdcf2[20] = "sdcf+2";

if(strcmp(sdcf2,mod1)==0){
strcpy(hex,"2A");}

char sdcf3[20] = "sdcf+3";

if(strcmp(sdcf3,mod1)==0){
strcpy(hex,"2B");}

char sdcf4[20] = "sdcf+4";

if(strcmp(sdcf4,mod1)==0){
strcpy(hex,"2C");}

//Backward-dash cont. fire

char bdcf1[20] = "bdcf+1";

if(strcmp(bdcf1,mod1)==0){
strcpy(hex,"2D");}

char bdcf2[20] = "bdcf+2";

if(strcmp(bdcf2,mod1)==0){
strcpy(hex,"2E");}

char bdcf3[20] = "bdcf+3";

if(strcmp(bdcf3,mod1)==0){
strcpy(hex,"2F");}

char bdcf4[20] = "bdcf+4";

if(strcmp(bdcf4,mod1)==0){
strcpy(hex,"30");}

//Melee combo


char mc1[20] = "mc+1";

if(strcmp(mc1,mod1)==0){
strcpy(hex,"31");}

char mc2[20] = "mc+2";

if(strcmp(mc2,mod1)==0){
strcpy(hex,"32");}

char mc3[20] = "mc+3";

if(strcmp(mc3,mod1)==0){
strcpy(hex,"33");}

char mc4[20] = "mc+4";

if(strcmp(mc4,mod1)==0){
strcpy(hex,"34");}

char mcneg1[20] = "mc-1";

if(strcmp(mcneg1,mod1)==0){
strcpy(hex,"35");}

char mcneg2[20] = "mc-2";

if(strcmp(mcneg2,mod1)==0){
strcpy(hex,"36");}



//Melee Dash Attack

char mda1[20] = "mda+1";

if(strcmp(mda1,mod1)==0){
strcpy(hex,"37");}

char mda2[20] = "mda+2";

if(strcmp(mda2,mod1)==0){
strcpy(hex,"38");}

char mda3[20] = "mda+3";

if(strcmp(mda3,mod1)==0){
strcpy(hex,"39");}

char mda4[20] = "mda+4";

if(strcmp(mda4,mod1)==0){
strcpy(hex,"3A");}

char mdaneg1[20] = "mda-1";

if(strcmp(mdaneg1,mod1)==0){
strcpy(hex,"3B");}

char mdaneg2[20] = "mda-2";

if(strcmp(mdaneg2,mod1)==0){
strcpy(hex,"3C");}

//Item Attack

char ia1[20] = "ia+1";

if(strcmp(ia1,mod1)==0){
strcpy(hex,"3D");}

char ia2[20] = "ia+2";

if(strcmp(ia2,mod1)==0){
strcpy(hex,"3E");}

char ia3[20] = "ia+3";

if(strcmp(ia3,mod1)==0){
strcpy(hex,"3F");}

char ia4[20] = "ia+4";

if(strcmp(ia4,mod1)==0){
strcpy(hex,"40");}


//Power Attack

char pa1[20] = "pa+1";

if(strcmp(pa1,mod1)==0){
strcpy(hex,"41");}

char pa2[20] = "pa+2";

if(strcmp(pa2,mod1)==0){
strcpy(hex,"42");}

char pa3[20] = "pa+3";

if(strcmp(pa3,mod1)==0){
strcpy(hex,"43");}

char pa4[20] = "pa+4";

if(strcmp(pa4,mod1)==0){
strcpy(hex,"44");}

//Health

char health1[20] = "health+1";

if(strcmp(health1,mod1)==0){
strcpy(hex,"45");}

char health2[20] = "health+2";

if(strcmp(health2,mod1)==0){
strcpy(hex,"46");}

char health3[20] = "health+3";

if(strcmp(health3,mod1)==0){
strcpy(hex,"47");}

char health4[20] = "health+4";

if(strcmp(health4,mod1)==0){
strcpy(hex,"48");}

char health5[20] = "health+5";

if(strcmp(health5,mod1)==0){
strcpy(hex,"49");}

char health6[20] = "health+6";

if(strcmp(health6,mod1)==0){
strcpy(hex,"4A");}

char healthneg1[20] = "health-1";

if(strcmp(healthneg1,mod1)==0){
strcpy(hex,"4B");}

char healthneg2[20] = "health-2";

if(strcmp(healthneg2,mod1)==0){
strcpy(hex,"4C");}

char healthneg3[20] = "health-3";

if(strcmp(healthneg3,mod1)==0){
strcpy(hex,"4D");}

char healthneg4[20] = "health-4";

if(strcmp(healthneg4,mod1)==0){
strcpy(hex,"4E");}

//Stamina

char stamina1[20] = "stamina+1";

if(strcmp(stamina1,mod1)==0){
strcpy(hex,"4F");}

char stamina2[20] = "stamina+2";

if(strcmp(stamina2,mod1)==0){
strcpy(hex,"50");}

char stamina3[20] = "stamina+3";

if(strcmp(stamina3,mod1)==0){
strcpy(hex,"51");}

char stamina4[20] = "stamina+4";

if(strcmp(stamina4,mod1)==0){
strcpy(hex,"52");}

//Speed

char speed1[20] = "speed+1";

if(strcmp(speed1,mod1)==0){
strcpy(hex,"53");}

char speed2[20] = "speed+2";

if(strcmp(speed2,mod1)==0){
strcpy(hex,"54");}

char speed3[20] = "speed+3";

if(strcmp(speed3,mod1)==0){
strcpy(hex,"55");}

char speed4[20] = "speed+4";

if(strcmp(speed4,mod1)==0){
strcpy(hex,"56");}

char speedneg1[20] = "speed-1";

if(strcmp(speedneg1,mod1)==0){
strcpy(hex,"57");}

char speedneg2[20] = "speed-2";

if(strcmp(speedneg2,mod1)==0){
strcpy(hex,"58");}

char speedneg3[20] = "speed-3";

if(strcmp(speedneg3,mod1)==0){
strcpy(hex,"59");}

char speedneg4[20] = "speed-4";

if(strcmp(speedneg4,mod1)==0){
strcpy(hex,"5A");}

char walkspeed1[20] = "ws+1";

if(strcmp(walkspeed1,mod1)==0){
strcpy(hex,"5B");}

char walkspeed2[20] = "ws+2";

if(strcmp(walkspeed2,mod1)==0){
strcpy(hex,"5C");}

char walkspeed3[20] = "ws+3";

if(strcmp(walkspeed3,mod1)==0){
strcpy(hex,"5D");}

char walkspeed4[20] = "ws+4";

if(strcmp(walkspeed4,mod1)==0){
strcpy(hex,"5E");}

char runspeed1[20] = "rs+1";

if(strcmp(runspeed1,mod1)==0){
strcpy(hex,"5F");}

char runspeed2[20] = "rs+2";

if(strcmp(runspeed2,mod1)==0){
strcpy(hex,"60");}

char runspeed3[20] = "rs+3";

if(strcmp(runspeed3,mod1)==0){
strcpy(hex,"61");}

char runspeed4[20] = "rs+4";

if(strcmp(runspeed4,mod1)==0){
strcpy(hex,"62");}

//Evasion

char evasion1[20] = "evasion+1";

if(strcmp(evasion1,mod1)==0){
strcpy(hex,"63");}

char evasion2[20] = "evasion+2";

if(strcmp(evasion2,mod1)==0){
strcpy(hex,"64");}

char evasion3[20] = "evasion+3";

if(strcmp(evasion3,mod1)==0){
strcpy(hex,"65");}

char evasion4[20] = "evasion+4";

if(strcmp(evasion4,mod1)==0){
strcpy(hex,"66");}

//Shot Defense

char sd1[20] = "sd+1";

if(strcmp(sd1,mod1)==0){
strcpy(hex,"67");}

char sd2[20] = "sd+2";

if(strcmp(sd2,mod1)==0){
strcpy(hex,"68");}

char sd3[20] = "sd+3";

if(strcmp(sd3,mod1)==0){
strcpy(hex,"69");}

char sd4[20] = "sd+4";

if(strcmp(sd4,mod1)==0){
strcpy(hex,"6A");}

char sdneg1[20] = "sd-1";

if(strcmp(sdneg1,mod1)==0){
strcpy(hex,"6B");}

char sdneg2[20] = "sd-2";

if(strcmp(sdneg2,mod1)==0){
strcpy(hex,"6C");}

//Melee Defense

char md1[20] = "md+1";

if(strcmp(md1,mod1)==0){
strcpy(hex,"6D");}

char md2[20] = "md+2";

if(strcmp(md2,mod1)==0){
strcpy(hex,"6E");}

char md3[20] = "md+3";

if(strcmp(md3,mod1)==0){
strcpy(hex,"6F");}

char md4[20] = "md+4";

if(strcmp(md4,mod1)==0){
strcpy(hex,"70");}

char mdneg1[20] = "md-1";

if(strcmp(mdneg1,mod1)==0){
strcpy(hex,"71");}

char mdneg2[20] = "md-2";

if(strcmp(mdneg2,mod1)==0){
strcpy(hex,"72");}

//Knockback Defense +1

char kd1[20] = "kd+1";

if(strcmp(kd1,mod1)==0){
strcpy(hex,"73");}

char kd2[20] = "kd+2";

if(strcmp(kd2,mod1)==0){
strcpy(hex,"74");}

char kd3[20] = "kd+3";

if(strcmp(kd3,mod1)==0){
strcpy(hex,"75");}

char kd4[20] = "kd+4";

if(strcmp(kd4,mod1)==0){
strcpy(hex,"76");}

//Status resistance

char statres1[20] = "stat+1";

if(strcmp(statres1,mod1)==0){
strcpy(hex,"77");}

char statres2[20] = "stat+2";

if(strcmp(statres2,mod1)==0){
strcpy(hex,"78");}

char statres3[20] = "stat+3";

if(strcmp(statres3,mod1)==0){
strcpy(hex,"79");}

char statres4[20] = "stat+4";

if(strcmp(statres4,mod1)==0){
strcpy(hex,"7A");}

char statresneg1[20] = "stat-1";

if(strcmp(statresneg1,mod1)==0){
strcpy(hex,"7B");}

char statresneg2[20] = "stat-2";

if(strcmp(statresneg2,mod1)==0){
strcpy(hex,"7C");}

char statresneg3[20] = "stat-3";

if(strcmp(statresneg3,mod1)==0){
strcpy(hex,"7D");}

char statresneg4[20] = "stat-4";

if(strcmp(statresneg4,mod1)==0){
strcpy(hex,"7E");}

//Overall Defense

char od1[20] = "od+1";

if(strcmp(od1,mod1)==0){
strcpy(hex,"7F");}

char od2[20] = "od+2";

if(strcmp(od2,mod1)==0){
strcpy(hex,"80");}

char od3[20] = "od+3";

if(strcmp(od3,mod1)==0){
strcpy(hex,"81");}

char od4[20] = "od+4";

if(strcmp(od4,mod1)==0){
strcpy(hex,"82");}

char od5[20] = "od+5";

if(strcmp(od5,mod1)==0){
strcpy(hex,"83");}

char od6[20] = "od+6";

if(strcmp(od6,mod1)==0){
strcpy(hex,"84");}

char od7[20] = "od+7";

if(strcmp(od7,mod1)==0){
strcpy(hex,"85");}

char od8[20] = "od+8";

if(strcmp(od8,mod1)==0){
strcpy(hex,"86");}

char odneg1[20] = "od-1";

if(strcmp(odneg1,mod1)==0){
strcpy(hex,"87");}

char odneg2[20] = "od-2";

if(strcmp(odneg2,mod1)==0){
strcpy(hex,"88");}

char odneg3[20] = "od-3";

if(strcmp(odneg3,mod1)==0){
strcpy(hex,"89");}

char odneg4[20] = "od-4";

if(strcmp(odneg4,mod1)==0){
strcpy(hex,"8A");}

//Recovery effect
char re1[20] = "re+1";

if(strcmp(re1,mod1)==0){
strcpy(hex,"8B");}

char re2[20] = "re+2";

if(strcmp(re2,mod1)==0){
strcpy(hex,"8C");}

char re3[20] = "re+3";

if(strcmp(re3,mod1)==0){
strcpy(hex,"8D");}

char re4[20] = "re+4";

if(strcmp(re4,mod1)==0){
strcpy(hex,"8E");}

//Effect Duration

char ed1[20] = "ed+1";

if(strcmp(ed1,mod1)==0){
strcpy(hex,"8F");}

char ed2[20] = "ed+2";

if(strcmp(ed2,mod1)==0){
strcpy(hex,"90");}

char ed3[20] = "ed+3";

if(strcmp(ed3,mod1)==0){
strcpy(hex,"91");}

char ed4[20] = "ed+4";

if(strcmp(ed4,mod1)==0){
strcpy(hex,"92");}

//Poison

char poison1[20] = "poison+1";

if(strcmp(poison1,mod1)==0){
strcpy(hex,"93");}

char poison2[20] = "poison+2";

if(strcmp(poison2,mod1)==0){
strcpy(hex,"94");}

char poison3[20] = "poison+3";

if(strcmp(poison3,mod1)==0){
strcpy(hex,"95");}

char poison4[20] = "poison+4";

if(strcmp(poison4,mod1)==0){
strcpy(hex,"96");}

//Paralysis

char para1[20] = "para+1";

if(strcmp(para1,mod1)==0){
strcpy(hex,"97");}

char para2[20] = "para+2";

if(strcmp(para2,mod1)==0){
strcpy(hex,"98");}

char para3[20] = "para+3";

if(strcmp(para3,mod1)==0){
strcpy(hex,"99");}

char para4[20] = "para+4";

if(strcmp(para4,mod1)==0){
strcpy(hex,"9A");}

//Weakening

char weak1[20] = "weakening+1";

if(strcmp(weak1,mod1)==0){
strcpy(hex,"9B");}

char weak2[20] = "weakening+2";

if(strcmp(weak2,mod1)==0){
strcpy(hex,"9C");}

char weak3[20] = "weakening+3";

if(strcmp(weak3,mod1)==0){
strcpy(hex,"9D");}

char weak4[20] = "weakening+4";

if(strcmp(weak4,mod1)==0){
strcpy(hex,"9E");}

//Petrification

char petri1[20] = "petri+1";

if(strcmp(petri1,mod1)==0){
strcpy(hex,"9F");}

char petri2[20] = "petri+2";

if(strcmp(petri2,mod1)==0){
strcpy(hex,"A0");}

char petri3[20] = "petri+3";

if(strcmp(petri3,mod1)==0){
strcpy(hex,"A1");}

char petri4[20] = "petri+4";

if(strcmp(petri4,mod1)==0){
strcpy(hex,"A2");}

//Shaking

char shake1[20] = "shaking+1";

if(strcmp(shake1,mod1)==0){
strcpy(hex,"A3");}

char shake2[20] = "shaking+2";

if(strcmp(shake2,mod1)==0){
strcpy(hex,"A4");}

char shake3[20] = "shaking+3";

if(strcmp(shake3,mod1)==0){
strcpy(hex,"A5");}

char shake4[20] = "shaking+4";

if(strcmp(shake4,mod1)==0){
strcpy(hex,"A6");}

//Confusion

char conf1[20] = "confusion+1";

if(strcmp(conf1,mod1)==0){
strcpy(hex,"A7");}

char conf2[20] = "confusion+2";

if(strcmp(conf2,mod1)==0){
strcpy(hex,"A8");}

char conf3[20] = "confusion+3";

if(strcmp(conf3,mod1)==0){
strcpy(hex,"A9");}

char conf4[20] = "confusion+4";

if(strcmp(conf4,mod1)==0){
strcpy(hex,"AA");}

//Burning

char burn1[20] = "burning+1";

if(strcmp(burn1,mod1)==0){
strcpy(hex,"AB");}

char burn2[20] = "burning+2";

if(strcmp(burn2,mod1)==0){
strcpy(hex,"AC");}

char burn3[20] = "burning+3";

if(strcmp(burn3,mod1)==0){
strcpy(hex,"AD");}

char burn4[20] = "burning+4";

if(strcmp(burn4,mod1)==0){
strcpy(hex,"AE");}

//Freezing

char freeze1[20] = "freezing+1";

if(strcmp(freeze1,mod1)==0){
strcpy(hex,"AF");}

char freeze2[20] = "freezing+2";

if(strcmp(freeze2,mod1)==0){
strcpy(hex,"B0");}

char freeze3[20] = "freezing+3";

if(strcmp(freeze3,mod1)==0){
strcpy(hex,"B1");}

char freeze4[20] = "freezing+4";

if(strcmp(freeze4,mod1)==0){
strcpy(hex,"B2");}

//Shot Range

char sr1[20] = "sr+1";

if(strcmp(sr1,mod1)==0){
strcpy(hex,"B3");}

char sr2[20] = "sr+2";

if(strcmp(sr2,mod1)==0){
strcpy(hex,"B4");}

char sr3[20] = "sr+3";

if(strcmp(sr3,mod1)==0){
strcpy(hex,"B5");}

char srneg1[20] = "sr-1";

if(strcmp(srneg1,mod1)==0){
strcpy(hex,"B6");}

char srneg2[20] = "sr-2";

if(strcmp(srneg2,mod1)==0){
strcpy(hex,"B7");}

char srneg3[20] = "sr-3";

if(strcmp(srneg3,mod1)==0){
strcpy(hex,"B8");}

//Shot Homing

char sh1[20] = "sh+1";

if(strcmp(sh1,mod1)==0){
strcpy(hex,"B9");}

char sh2[20] = "sh+2";

if(strcmp(sh2,mod1)==0){
strcpy(hex,"BA");}

char sh3[20] = "sh+3";

if(strcmp(sh3,mod1)==0){
strcpy(hex,"BB");}

char shneg1[20] = "sh-1";

if(strcmp(shneg1,mod1)==0){
strcpy(hex,"BC");}

char shneg2[20] = "sh-2";

if(strcmp(shneg2,mod1)==0){
strcpy(hex,"BD");}

char shneg3[20] = "sh-3";

if(strcmp(shneg3,mod1)==0){
strcpy(hex,"BE");}

//Shot Cancelation

char sc1[20] = "sc+1";

if(strcmp(sc1,mod1)==0){
strcpy(hex,"BF");}

//Knockback Recovery

char kr1[20] = "kr+1";

if(strcmp(kr1,mod1)==0){
strcpy(hex,"C0");}

//Auto-erotic Asphixiation

char si1[20] = "si-1";

if(strcmp(si1,mod1)==0){
strcpy(hex,"C1");}

char si2[20] = "si-2";

if(strcmp(si2,mod1)==0){
strcpy(hex,"C2");}

char si3[20] = "si-3";

if(strcmp(si3,mod1)==0){
strcpy(hex,"C3");}

//Full-health boost

char fhb1[20] = "fhb+1";

if(strcmp(fhb1,mod1)==0){
strcpy(hex,"C4");}

char fhb2[20] = "fhb+2";

if(strcmp(fhb2,mod1)==0){
strcpy(hex,"C5");}

char fhb3[20] = "fhb+3";

if(strcmp(fhb3,mod1)==0){
strcpy(hex,"C6");}

char fhb4[20] = "fhb+4";

if(strcmp(fhb4,mod1)==0){
strcpy(hex,"C7");}

char fhb5[20] = "fhb+5";

if(strcmp(fhb5,mod1)==0){
strcpy(hex,"C8");}

char fhb6[20] = "fhb+6";

if(strcmp(fhb6,mod1)==0){
strcpy(hex,"C9");}

//In Peril Auto-Dodge (iPad)

char /*ge*/ iPad1[20] = "ipad+1";

if(strcmp(iPad1,mod1)==0){
strcpy(hex,"CA");}

char iPad2[20] = "ipad+2";

if(strcmp(iPad2,mod1)==0){
strcpy(hex,"CB");}

char iPad3[20] = "ipad+3";

if(strcmp(iPad3,mod1)==0){
strcpy(hex,"CC");}

// In Peril Attack Boost

char ipab1[20] = "ipab+1";

if(strcmp(ipab1,mod1)==0){
strcpy(hex,"CD");}

char ipab2[20] = "ipab+2";

if(strcmp(ipab2,mod1)==0){
strcpy(hex,"CE");}

char ipab3[20] = "ipab+3";

if(strcmp(ipab3,mod1)==0){
strcpy(hex,"CF");}

char ipab4[20] = "ipab+4";

if(strcmp(ipab4,mod1)==0){
strcpy(hex,"D0");}

char ipab5[20] = "ipab+5";

if(strcmp(ipab5,mod1)==0){
strcpy(hex,"D1");}

char ipab6[20] = "ipab+6";

if(strcmp(ipab6,mod1)==0){
strcpy(hex,"D2");}

char ipabneg1[20] = "ipab-1";

if(strcmp(ipabneg1,mod1)==0){
strcpy(hex,"D3");}

char ipabneg2[20] = "ipab-2";

if(strcmp(ipabneg2,mod1)==0){
strcpy(hex,"D4");}

char ipabneg3[20] = "ipab-3";

if(strcmp(ipabneg3,mod1)==0){
strcpy(hex,"D5");}

char ipabneg4[20] = "ipab-4";

if(strcmp(ipabneg4,mod1)==0){
strcpy(hex,"D6");}

//Heart Bonus

char hb1[20] = "hb+1";

if(strcmp(hb1,mod1)==0){
strcpy(hex,"D7");}

char hb2[20] = "hb+2";

if(strcmp(hb2,mod1)==0){
strcpy(hex,"D8");}

char hb3[20] = "hb+3";

if(strcmp(hb3,mod1)==0){
strcpy(hex,"D9");}

char hbneg1[20] = "hb-1";

if(strcmp(hbneg1,mod1)==0){
strcpy(hex,"DA");}

char hbneg2[20] = "hb-2";

if(strcmp(hbneg2,mod1)==0){
strcpy(hex,"DB");}

char hbneg3[20] = "hb-3";

if(strcmp(hbneg3,mod1)==0){
strcpy(hex,"DC");}

//Dem ranged starz tho

char s05r[20] = "0.5r";

if(strcmp(s05r,mod1)==0){
strcpy(hex,"01");}

char s10r[20] = "1r";

if(strcmp(s10r,mod1)==0){
strcpy(hex,"02");}

char s15r[20] = "1.5r";

if(strcmp(s15r,mod1)==0){
strcpy(hex,"03");}

char s20r[20] = "2r";

if(strcmp(s20r,mod1)==0){
strcpy(hex,"04");}


char s25r[20] = "2.5r";

if(strcmp(s25r,mod1)==0){
strcpy(hex,"05");}

char s30r[20] = "3r";

if(strcmp(s30r,mod1)==0){
strcpy(hex,"06");}

char s35r[20] = "3.5r";

if(strcmp(s35r,mod1)==0){
strcpy(hex,"07");}

char s40r[20] = "4r";

if(strcmp(s40r,mod1)==0){
strcpy(hex,"08");}

char s45r[20] = "4.5r";

if(strcmp(s45r,mod1)==0){
strcpy(hex,"09");}

char s50r[20] = "5r";

if(strcmp(s50r,mod1)==0){
strcpy(hex,"0A");}

char s55r[20] = "5.5r";

if(strcmp(s55r,mod1)==0){
strcpy(hex,"0B");}

char s60r[20] = "6r";

if(strcmp(s60r,mod1)==0){
strcpy(hex,"0C");}

char neg05r[20] = "-0.5r";

if(strcmp(neg05r,mod1)==0){
strcpy(hex,"0D");}

char neg10r[20] = "-1r";

if(strcmp(neg10r,mod1)==0){
strcpy(hex,"0E");}

char neg15r[20] = "-1.5r";

if(strcmp(neg15r,mod1)==0){
strcpy(hex,"0F");}


//Dem melee starz tho

char s05m[20] = "0.5m";

if(strcmp(s05m,mod1)==0){
strcpy(hex,"11");}

char s10m[20] = "1m";

if(strcmp(s10m,mod1)==0){
strcpy(hex,"12");}

char s15m[20] = "1.5m";

if(strcmp(s15m,mod1)==0){
strcpy(hex,"13");}

char s20m[20] = "2m";

if(strcmp(s20m,mod1)==0){
strcpy(hex,"14");}


char s25m[20] = "2.5m";

if(strcmp(s25m,mod1)==0){
strcpy(hex,"15");}

char s30m[20] = "3m";

if(strcmp(s30m,mod1)==0){
strcpy(hex,"16");}

char s35m[20] = "3.5m";

if(strcmp(s35m,mod1)==0){
strcpy(hex,"17");}

char s40m[20] = "4m";

if(strcmp(s40m,mod1)==0){
strcpy(hex,"18");}

char s45m[20] = "4.5m";

if(strcmp(s45m,mod1)==0){
strcpy(hex,"19");}

char s50m[20] = "5m";

if(strcmp(s50m,mod1)==0){
strcpy(hex,"1A");}

char s55m[20] = "5.5m";

if(strcmp(s55m,mod1)==0){
strcpy(hex,"1B");}

char s60m[20] = "6m";

if(strcmp(s60m,mod1)==0){
strcpy(hex,"1C");}

char neg05m[20] = "-0.5m";

if(strcmp(neg05m,mod1)==0){
strcpy(hex,"1D");}

char neg10m[20] = "-1m";

if(strcmp(neg10m,mod1)==0){
strcpy(hex,"1E");}

char neg15m[20] = "-1.5m";

if(strcmp(neg15m,mod1)==0){
strcpy(hex,"1F");}

char neg20m[20] = "-2m";

if(strcmp(neg20m,mod1)==0){
strcpy(hex,"20");}

char neg20r[20] = "-2r";

if(strcmp(neg20r,mod1)==0){
strcpy(hex,"10");}

char zeror[20] = "0r";
if(strcmp(zeror,mod1)==0){
strcpy(hex,"00");}	

char zerom[20] = "0m";
if(strcmp(zerom,mod1)==0){
strcpy(hex,"00");}

char zeromod[20] = "none";
if(strcmp(zeromod,mod1)==0){
strcpy(hex,"00");}
}

int main()
{
printf("Welcome to kid hexarus, a free program poorly written by the guy who ruined Miiverse.\n");
char hex1[20],hex2[20],hex3[20],hex4[20],hex5[20],hex6[20],rshex[20],mshex[20];
repeat:
printf("\nInsert ranged, melee and up to six modifiers: \n");
mod2hex();
strcpy(rshex,hex);
mod2hex();
strcpy(mshex,hex);
mod2hex();
strcpy(hex1,hex);
mod2hex();
strcpy(hex2,hex);
mod2hex();
strcpy(hex3,hex);
mod2hex();
strcpy(hex4,hex);
mod2hex();
strcpy(hex5,hex);
mod2hex();
strcpy(hex6,hex);
printf("The final hex value for your weapon's mods is: \n%s00%s00000000000000000000%s00%s00%s00%s00%s00%s \n",rshex,mshex,hex1,hex2,hex3,hex4,hex5,hex6);
char answeroo;
switcheroo:
printf("Repeat? (y/n)\n");
scanf("%s",&answeroo);
switch (answeroo){
	case 'n':{printf("Press return to leave");getchar();getchar();return 0;}
	case 'y':{goto repeat;}
	default :{goto switcheroo;}
}}







