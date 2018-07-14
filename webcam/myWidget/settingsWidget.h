#ifndef settingsWidget_H
#define settingsWidget_H

#include <QWidget>
#include <QLabel>
#include <QPainter>
#include <QDebug>

class settingsWidget: public QWidget
{
Q_OBJECT
public:    
    virtual ~settingsWidget();
    settingsWidget( QWidget *parent );

    
public:

  
public slots:
    void setColor( const QColor color );

  
private:
    QColor widgetColor;


private slots:

  
protected:
  void paintEvent( QPaintEvent *event );
  void mouseReleaseEvent ( QMouseEvent * event );

  
signals:
  void clicked( bool value );

  
};

#endif // circleWidget_H
