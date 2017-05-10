

#include <QApplication>
#include <QPushButton>
#include <QMainWindow>

#include "MainWindow.h"

int main( int argc, char **argv ) {
	MainWindow *window;
	
	
	QApplication app( argc, argv );
	
	QPushButton hello( "Hello world!", 0 );
	//hello.resize( 100, 30 );
	
	//	  a.setMainWidget( &hello );
	//hello.show();
	
	window = new MainWindow();
	window->show();
	return app.exec();
}
