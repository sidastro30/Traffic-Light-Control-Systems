 
 
 
 void Aregion(void);
 void Bregion(void);
 void Cregion(void);
 
 void A_1(void);
 void A_2(void);
 void A_3(void);
 void A_4(void);
 void A_5(void);
 void A_6(void);
 void A_7(void);
 void A_8(void);
 
 void B_1(void);
 void B_2(void);
 void B_3(void);
 void B_4(void);
 void B_5(void);
 void B_6(void);
 void C_1(void);
 
 void C_2(void);
 
 
 void setup()
{
  // lcd.begin(16, 2);
  Serial.begin(9600);
/*  
   pinMode(red, OUTPUT);   // redT
    pinMode(yellow, OUTPUT);  //yellowT
    pinMode(green, OUTPUT); // greenT
pinMode(greenL, OUTPUT); // greenL
pinMode(greenR, OUTPUT); // greenR
  
  //Serial.print("setup");*/
}
/*for(int p1=1;p1<9;p1++)
{	
A_1();B_1();
delay(45000);
for(A_1;A_8;A_1++)
}*/
void loop()
{
//t1 
A_1();B_1();
delay(45000);
//t2
A_2();C_1();
delay(45000);
//t3
A_3();B_2();
delay(45000);
//t4
A_4();C_2();
delay(45000);
//t5
A_5();B_3();
delay(45000);
//t6
A_6();B_4();C_1();
delay(45000);
//t7
A_7();
delay(45000);
//t8
A_8();B_5();C_2();
delay(45000);
//t9
A_1();
delay(45000);
//t10	
A_2();B_6();C_1();
delay(45000);
//Aregion();
//Bregion();
//Cregion();
}

void A_1(void){

Serial.println("NB A_NGS=0  A_NGL=1  A_NGR=0 A_NR=0");
digitalWrite(redLED,HIGH);
 
Serial.println( "SB A_SGS=0 A_SGL=1 A_SGR=0 A_SR=0");

Serial.println( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=1");
Serial.println( " WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=1");
//delay( 45000);
 } 
 
 
 void A_2(void){
Serial.println( "NB A_NGS=1 A_NGL=1 A_NGR=1 A_NR=0 "); 
Serial.println( "SB A_SGS=0 A_SGL=0 A_SGR=0 A_SR=1 "); 
Serial.println( "EB A_EGS=0 A_EGL=0 A_EGR=1 A_ER=0 ");
Serial.println( "WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=1");
//delay( 45000);
 } 
 void A_3(void){
 Serial.println( " NB A_NGS=1 A_NGL=0 A_NGR=1 A_NR=0 ");
Serial.println( "SB A_SGS=1 A_SGL=0 A_SGR=1 A_SR=0 ");
 Serial.println( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=1 ");
 Serial.println( " WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=1");
 //delay( 45000);
 } 
 void A_4(void){
Serial.println( "NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1 "); 
 Serial.println( "SB A_SGS=1 A_SGL=1 A_SGR=1 A_SR=0 ");
 Serial.println( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=0");
 Serial.println( "WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=0");
 //delay( 45000);
 } 
 void A_5(void){
 Serial.println( " NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1");
Serial.println( "SB A_SGS=0 A_SGL=0 A_SGR=0 SR=1");
Serial.println( "EB A_EGS=0 A_EGL=1 A_EGR=0 A_ER=0"); 
Serial.println( "WB A_WGS=0 A_WGL=1 A_WGR=0 A_WR=0 ");
//delay( 45000);
 } 
void A_6(void){
 Serial.println( "NB A_NGS=0 A_NGL=0 A_NGR=1 A_NR=0");
Serial.println( "SB A_SGS=0 A_SGL=0 A_SGR=0 A_SR=1");
Serial.println( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=1 ");
Serial.println( "WB A_WGS=1 A_WGL=1 A_WGR=0 A_WR=0 ");
 //delay( 45000);
 } 
 void A_7(void){
Serial.println( " NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1"); 
Serial.println( "SB A_SGS=0 A_SGL=0 A_SGR=0 A_SR=0 ");
Serial.println( " EB A_EGS=0 A_EGL=0 A_EGR=1 A_ER=0 ");
 Serial.println( "EB A_EGS=1 A_EGL=0 A_EGR=1 A_ER=0 ");
 //delay( 45000);
 } 
 void A_8(void){
 Serial.println( "NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1 ");
Serial.println( "SB A_SGS=0 A_SGL=0 A_SGR=1 A_SR=0");
Serial.println( "EB A_EGS=1 A_EGL=1 A_EGR=1 A_ER=0");
Serial.println( "WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=0");
//delay( 45000);
 } 
//-----------------------------
 void B_1(void){
 Serial.println( "NB B_NGS=1 B_NGL=1 B_NGR=1 B_NR=0");
Serial.println( " SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1");
 Serial.println( " EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1 ");
 Serial.println( " WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1 ");
 //delay( 45000);
 } 
void B_2(void){
 Serial.println( " NB B_NGS=1 B_NGL=0 B_NGR=1 B_NR=0 ");
Serial.println( "SB B_SGS=1 B_SGL=0 B_SGR=1 B_SR=0");
Serial.println( "EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1 ");
Serial.println( "WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1");
//delay( 90000);
 } 
 void B_3(void){
Serial.println( " NB B_NGS=0 B_NGL=0 B_NGR=0 B_NR=1 ");
Serial.println( " SB B_SGS=1 B_SGL=1 B_SGR=1 B_SR=0 ");
Serial.println( "EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1");
Serial.println( "WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1 ");
//delay( 90000);
 }
 
 void B_4(void){
 Serial.println( "NB B_NGS=0 B_NGL=0 B_NGR=0 B_NR=1");
Serial.println( "SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1");
Serial.println( " EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1 ");
Serial.println( "WB B_WGS=1 B_WGL=1 B_WGR=1 B_WR=0");
 } 
void B_5(void){
Serial.println( "  NB B_NGS=0 B_NGL=0B_NGR=0 B_NR=1 ");
Serial.println( "SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1 ");
Serial.println( "EB B_EGS=1 B_EGL=0 B_EGR=1 B_ER=0");
Serial.println( "WB B_WGS=1 B_WGL=0 B_WGR=1 B_WR=0");
//delay( 90000);
 } 
void B_6(void){
 Serial.println( "NB B_NGS=0 B_NGL=0 B_NGR=0 B_NR=1");
Serial.println( " SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1");
Serial.println( " EB B_EGS=1 B_EGL=1 B_EGR=1 B_ER=0 ");
 Serial.println( " WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1");
 ///delay( 45000);
 } 
//-----------------------------

void C_1(void){

Serial.println( "NB NG=1 NR=0  "); 
 
Serial.println( " SB SG=1 SR=0 ");
 
Serial.println( " EB EG=0 ER=1 ");

 Serial.println( "WB WG=0 WR=1");
 //delay( 90000);
 } 
 void C_2(void){
 
Serial.println( " NB NG=0 NR=1");
 
Serial.println( "SB SG=0 SR=1  ");
 
Serial.println( " EB EG=1 ER=0  ");
 
 Serial.println( "WB WG=1 WR=0 ");
 //delay( 90000);
 }

//-----------------------------

void Aregion(void)
{
 A_1();
 delay( 45000); 
  A_2();
 delay( 45000);
 A_3();
 delay( 45000);
  A_4();
 delay( 45000);
  A_5();
 delay( 45000);
  A_6();
  delay( 45000);
  A_7();
 delay( 45000);
  A_8();
delay( 45000);
}
void Bregion(void)
{
 B_1();delay( 45000);
 B_2();delay( 90000);
 B_3();delay( 90000);
 B_4();delay( 45000);
 B_5();delay( 90000);
 B_6();delay( 90000);		
}
void Cregion(void)
{
 C_1();delay( 90000);
 C_2();delay( 90000);		
}


