void printf(char* str)
{
        unsigned short* VideoMemory = (unsigned short*)0xb8000;

        for(int i = 0; str[i] != '\0'; ++i){
                VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
        }
}

extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber){

        printf("Hello World! This is Hiba's first attempt at making an OS");

        while(1);

}
