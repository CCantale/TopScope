/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*    SupportScope.hpp                                 created by ccantale    */
/*                                                                            */
/*    project: TopScope                        claudio.cantale93@gmail.com    */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef SUPPORTSCOPE_HPP
# define SUPPORTSCOPE_HPP

# include "../TabColumn/TabColumn.hpp"

# define SUPPORT_SCOPE_FILE_PATH	"scope.txt"

class	SupportScope
{
	private:
		TabColumn	apps;

	public:
				SupportScope(void);
				~SupportScope(void);
				SupportScope(SupportScope const &toCopy);
		SupportScope	&operator=(SupportScope const &toCopy);
		applist	const	&getApps(void) const;
};

#endif
