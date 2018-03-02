#include "AplicationController.h"

AplicationController::AplicationController()
{
	aplication = new AplicationView;
}

AplicationController::start()
{
	aplication->interact();
}
