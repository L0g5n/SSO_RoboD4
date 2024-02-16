#include <FEHLCD.h>
#include <FEHIO.h>

int main(void)
{
    LCD.Clear(BLACK);
    LCD.WriteLine("Hello, World!");
    AnalogInputPin cds(FEHIO::P0_0);
    while(1){
        LCD.Clear(BLACK);
        Sleep(0.5);
        LCD.WriteLine(cds.Value());
    }
	return 0;
}
