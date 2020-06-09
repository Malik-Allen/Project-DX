#ifndef COMMAND_H
#define COMMAND_H

#include "Containers/DynamicStack.h"

class ICommand {
public:
	virtual ~ICommand() {}
	virtual void Execute() = 0;
	virtual void Undo() = 0;
	virtual void Redo() = 0;
};


class CommandManager {
	DynamicStack<ICommand*> undo_stack;
	DynamicStack<ICommand*> redo_stack;

public:

	CommandManager() {}
	~CommandManager() {}

	void Exec_Command(ICommand* command) {
		redo_stack.clear();
		command->Execute();
		undo_stack.push(command);
	}

	void Undo_Command() {
		if (undo_stack.size() <= 0)
			return;
		undo_stack.top()->Undo();
		redo_stack.push(undo_stack.top());
		undo_stack.pop();
	}

	void Redo_Command() {
		if (redo_stack.size() <= 0)
			return;
		redo_stack.top()->Redo();
		undo_stack.push(redo_stack.top());
		redo_stack.pop();
	}

};

#endif COMMAND_H
