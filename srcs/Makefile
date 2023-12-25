################################################################################
#                                                                              #
#                                                                              #
#    Makefile                                           created by ccantale    #
#                                                                              #
#    project: TopScope                          claudio.cantale93@gmail.com    #
#                                                                              #
#                                                                              #
################################################################################

APP		=	..\TopScope

CC		=	g++
COMP_FLAGS	=	-Wall -Wextra -Werror

SRCS		=	main.cpp \
			Log/Log.cpp

OBJDIR		=	obj
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

STATIC_LIBS	=	-static-libgcc -static-libstdc++




all: $(APP)


$(APP): $(OBJS)
	@$(CC) $^ $(STATIC_LIBS) -o $(APP)

$(OBJS): $(OBJDIR)/%.o: %.cpp
	@if not exist $(OBJDIR) mkdir $(OBJDIR)
	@if not exist $(OBJDIR)\Log mkdir $(OBJDIR)\Log
	@$(CC) $(COMP_FLAGS) -c $< -o $(addprefix $(OBJDIR)/, $(<:.cpp=.o))

clean:
	@del /q /s $(OBJDIR)

fclean:
	@del $(APP).exe

kill: clean fclean


re: kill all

r: all
	@$(APP).exe
	@type ..\Logbook\log.txt

.PHONY: all clean fclean kill re r
