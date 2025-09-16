//include the iremote library header
//
#include<iremote.h>


//tell iremote which arduino pin is connected to the ir receiver(tsop4838)
//
int recvpin=11;
irrecve irrecv(recvpin);


//configure the arduino
//
void setup (){
serial.beigin(115200);//status message will be sent to pc at 9600 baud
irrev.enablelrln();//start the receiver

}

//display ir connected
//
void ircode(decode_results*results)
{
//panasonic has an address
if(results->decorde_type==panasonic){
serial.print(results->address,hex);
serial.print(":")

}
//print code
//
void encording(decode-type){
default:
case unknown:serial.pritln("unknown" );  break;
casesony:serial.print("sony"); break;
caserc5:serial.print("rc5");  break;
caserc6:serial.print("rc6");  break;
case dish:serial.print("dish"); break;
case sharp:serial.print("sharp"); break;
case jvc:serial.print("jvc");  break;
case sanyo:serial.print("sanyo");  break;
case mitsubishi:serial.print("mitsubishi"); break;
case samsang:serial.print("samsang") ; break;
case lg:serial.print("lg");  break;
case whinter:serial.print("whinter"); break;
case alwa_rc_t501:serial.print("alwa_rc_t01);  break;
case panasonic:serial.print("panasonic");   break;
