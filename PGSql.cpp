#include <iostream>
#include "/usr/include/postgresql/libpq-fe.h"

using namespace std;

int main(int argc, char *argv[])
{
    PGconn *conn = PQconnectdb("user=postgres password=postgres dbname=knome_development hostaddr=127.0.0.1 port=5432");

    if (PQstatus(conn) != CONNECTION_OK)
    {
        cout << "Connection to database failed.\n" << endl;
        PQfinish(conn);
    }

    cout << "Connection to database - OK\n" << endl;

    PGresult *res = PQexec(conn, "SELECT * FROM users");

	cout << PQdb(conn) << endl;
    cout << PQresultStatus(res) << endl;
	cout << PGRES_COMMAND_OK << endl;
	cout << PGRES_TUPLES_OK << endl;

    if ((PQresultStatus(res) != PGRES_COMMAND_OK) && (PQresultStatus(res) != PGRES_TUPLES_OK))
    {
        cout << "Create employee table failed\n" << endl;
        PQclear(res);
        PQfinish(conn);
		return 1;
    }

	int nRows = PQntuples(res);
	cout << "Number of users: " << nRows << endl;
	int	nColumns = PQnfields(res);
	cout << "Number of fields/columns: " << nColumns << endl;

    for (int i = 0; i < nRows; i++)
	{
		for (int j = 0; j < nColumns; j++)
			cout << PQgetvalue(res, i, j) << "     ";
	    cout << "\n" << endl;
	}
    return 0;
}

