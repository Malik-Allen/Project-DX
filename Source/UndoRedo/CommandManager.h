#ifndef COMMAND_H
#define COMMAND_H

#include "Containers/DynamicStack.h"

class ICommand {
public:
	virtual ~ICommand() {}
	virtual bool Execute() = 0;
	virtual bool Undo() = 0;
	virtual bool Redo() = 0;
};


class CommandManager {
	DynamicStack<ICommand*> undo_stack;
	DynamicStack<ICommand*> redo_stack;

public:

	CommandManager() {}
	~CommandManager() { undo_stack.clear(); redo_stack.clear(); }

	bool Exec_Command(ICommand* command) {
		redo_stack.clear();
		if(!command->Execute())
			return false;
		undo_stack.push(command);
		return true;
	}

	bool Undo_Command() {
		if (undo_stack.size() <= 0)
			return false;
		if(!undo_stack.top()->Undo())
			return false;
		redo_stack.push(undo_stack.top());
		undo_stack.pop();
		return true;
	}

	bool Redo_Command() {
		if (redo_stack.size() <= 0)
			return false;
		if(!redo_stack.top()->Redo())
			return false;
		undo_stack.push(redo_stack.top());
		redo_stack.pop();
		return true;
		
	}

};

#endif COMMAND_H
