#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QProcess>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
	QMainWindow mainWindow;
	mainWindow.setWindowTitle("QTalk");
	mainWindow.resize(200, 30);
	mainWindow.show();

	QLabel *label = new QLabel("何か凄い機能があると思ったの？ばかなの？しぬの？");
	QProcess process;
	process.start("saykana -s 70 なにかすごいきのうがあるとおもったの？。ばかなの？。しぬの？");
	return app.exec();
}
