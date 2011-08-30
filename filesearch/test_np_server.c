#include "env.h"
#include "util.h"
#include "serverNP.h"
#include "main.h"
#include "drive.h"
#include "util.h"


int main(){
	char str[MD5_LEN*2+1] = {0};
	MD5File("rails.png",str);
	if (!SetConsoleCtrlHandler(shutdown_handle, TRUE)) {
		WIN_ERROR;
		return 3;
	}
	//get_drive_space(10);
	gigaso_init();
	if(start_named_pipe()){
		wait_stop_named_pipe();
	}
	gigaso_destory();
	ExitProcess(0);
	return 0;
}
