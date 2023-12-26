/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*    TabColumn.hpp                                    created by ccantale    */
/*                                                                            */
/*    project: TopScope                        claudio.cantale93@gmail.com    */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef TABCOLUMN_HPP
# define TABCOLUMN_HPP

# include <string>
# include <list>

using column_t = std::list<std::string>;

class TabColumn
{
	private:
		column_t	_column;
		
	public:
				TabColumn(void);
				~TabColumn(void);
				TabColumn(std::string filePath);
				TabColumn(TabColumn const &toCopy);
		TabColumn	&operator=(TabColumn const &toCopy);
		TabColumn	&operator[](unsigned int i);
		column_t const	&get(void) const;
		void		set(unsigned int i, std::string newEntry);
};

#endif
