#include "FilesView.h"
#include "File.h"

FilesView::interact()
{	
	File file;
	personsView = new PersonView; 
	personsView->interact(file.find("General"));	
}

