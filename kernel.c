void _start() {
    char* video_memory = (char*)0xB8000;
    char* message = "Vioner OS Running! Made by YOU!";
    
    for (int i = 0; message[i] != '\0'; i++) {
        video_memory[i*2] = message[i];
        video_memory[i*2+1] = 0x07;
    }
    
    while(1);
}
