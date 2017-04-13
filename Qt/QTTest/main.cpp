
/**
 * 
 * 
 * 
 */


#include <QtCore/QCoreApplication>
#include <QtCore/QTimer>
#include <QDebug>

/*
class MyApp : public QCoreApplication {
   Q_OBJECT
  public:
   
     Myapp (int argc, char** argv);
   virtual ~Myapp ();
   
   void run();


  private slots:
     void    cleanupAtEndOfProgram();
}


Myapp::Myapp (int argc, char** argv) : QCoreApplication(argc, argv) {

  connect( this, SIGNAL( aboutToQuit() ), SLOT( cleanupAtEndOfProgram() ) );
}

*/
int singleShot(int argc, char **argv) {
  QCoreApplication a(argc, argv);
  QTimer::singleShot(2000, &a, SLOT(quit()));
  return a.exec();
  exit(0);
}

void simpleIO() {
  QString name;
  QTextStream out(stdout, QIODevice::WriteOnly);
  QTextStream in(stdin, QIODevice::ReadOnly);

  out << QString("Hello World") << endl;
  in >> name;
  out << QString("Hello, ").append(name) << endl;
  //exit(0);
}


int main( int argc, char **argv ) {

  simpleIO();
  singleShot(argc, argv);
  


}
