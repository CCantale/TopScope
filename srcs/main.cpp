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

static void	displayLogs(void)
{
	system("cls");
	std::cout << APP_NAME << " version " << VERSION << "\n\n";
	std::cout << "Logs from last run:\n\n";
	system("type Logbook\\log.txt");
	std::cout << RESET << "Press any key to exit... " << std::endl;
	getch();
}

static char	getTask(void)
{
	char	task;

	std::cout << BLUE << APP_NAME << " " << VERSION << "\n\n" << ORANGE
			<< "Please, choose a task by typing the corresponding letter:\n\n"
			<< ENDCOLOR
			<< "1) Read logs from previous run: " << BLUE << "\tl\n" << ENDCOLOR
			<< "\n\n"
			<< "Press " << BLUE << "q" << ENDCOLOR << " to exit"
			<< "\n\n";
	while (!(task == 'l' || task == 'q' || task == 'c'))
	{
		task = getch();
	}
	if (task == 'l')
		displayLogs();
	return (task);
}

static void	runTask(char task)
{
	(void)task;
/*
	Scope		scope(SCOPE_FILE_PATH);
	AppList		list(APPLIST_FILE_PATH);
	Report		report(scope, list);
	std::ofstream	output;
	
	output.open(OUTPUT_FILE, std::ifstream::trunc);
*/
}

int	main(void)
{
	char	task;

	task = getTask();
	if (task == 'l' || task == 'q')
		return (0);
	Log::init();
	Log::lout << timestamp << APP_NAME << " started." << std::endl;
	runTask(task);
	Log::lout << timestamp << "All processes terminated successfully." << std::endl;
	Log::quit();
	return (0);
}
	
	
