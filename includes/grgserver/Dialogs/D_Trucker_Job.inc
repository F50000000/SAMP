ShowDialog:Trucker_Job(playerID)
{
	FormatNew:options[30]("Truckerfirma kaufen");
	Format:options("%s\nBewerben", options);
	CreateDialog(playerID, "Trucker_Job", DIALOG_STYLE_LIST, "Trucker", options, "OK", LanguageString(playerID, 165));
}

DialogResponse:Trucker_Job(playerID, response, listItem, inputText[])
{
	if (response)
	{
		switch (listItem)
		{
			case 0: // Kaufe Trucker
			{
				// TODO: MySQL Daten bank hinzuf�gen bei Jobs die OwnerUserID zum kaufen.
				SendClientMessage(playerID, COLOR_SYSTEM, "Work in progress");
			}
			case 1: // Bewerben f�r den Job Trucker
			{
				if(PVar:playerID[JOBID] >= 0)
				{
					// TODO: MySQL DB erstellen f�r Bewerbung jeglicher Jobarten.
					// TODO: Diese der Owner des Jobs bearbeiten kann anneehmen kann und ablehnen kann.
					SendClientMessage(playerID, COLOR_SYSTEM, "Work in progress");
				}
				else
				{
					SendClientMessageEx(playerID, COLOR_ERROR, 39);
				}
			}
		}
	}
}