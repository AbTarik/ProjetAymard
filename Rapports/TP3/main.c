int main(int argc, char **argv) {
    if(argc == 1) {
    	message("unknown");
    } else {
        message(argv[1]);
    }
    printf("This is a first program ! \n");

    return 0;
}
