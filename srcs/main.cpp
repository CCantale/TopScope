/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*    main.cpp                                         created by ccantale    */
/*                                                                            */
/*    project: TopScope                        claudio.cantale93@gmail.com    */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include "main.h"

/*
static char	getTask(void)
{
	char	task;

	std::cout << CYAN << APP_NAME << " " << VERSION << "\n\n" << YELLOW
			<< "Please, choose a task by typing the corresponding letter:\n\n"
			<< ENDCOLOR
			<< "1) Get DLQ info (ID, ref, short ref): " << CYAN << "\ti\n" << ENDCOLOR
			<< "2) Get DLQ references: " << CYAN << "\t\t\tr\n" << ENDCOLOR
			<< "3) Get DLQ short references: " << CYAN << "\t\ts\n" << ENDCOLOR
			<< "4) Get DLQ doubles: " << CYAN << "\t\t\td\n" << ENDCOLOR
			<< "5) Filter DLQ with incidents: " << CYAN << "\t\tf\n" << ENDCOLOR
			<< "6) Read logs from previous run: " << CYAN << "\tl\n" << ENDCOLOR
			<< "\n\n"
			<< "Press " << CYAN << "q" << ENDCOLOR << " to exit"
			<< "\n\n";
	while (!(task == 'i' || task == 'r' || task == 's' || task == 'd' || task == 'f' || task == 'l' || task == 'q'))
	{
		task = getch();
	}
	if (task == 'l')
		displayLogs();
	return (task);
}
*/

int	main(void)
{
	Log::init();
	Log::lout << "Code Starts Here..." << std::endl;
/*
	char		task = getTask();
	if (task == QUIT)
		return (0);
	Scope		scope(SCOPE_FILE_PATH);
	AppList		list(APPLIST_FILE_PATH);
	Report		report(scope, list);
	std::ofstream	output;
	
	output.open(OUTPUT_FILE, std::ifstream::trunc);
*/
	Log::lout << "... Code Ends Here." << std::endl;
	Log::quit();
	return (0);
}
	
	
