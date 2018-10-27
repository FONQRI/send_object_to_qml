#ifndef PROPERTY_CLASS_H
#define PROPERTY_CLASS_H

#include <QObject>

class property_class : public QObject {
	Q_OBJECT
	Q_PROPERTY(QString str_value READ str_value WRITE set_str_value NOTIFY
		   srt_valueChanged)
	QString m_str_value;

  public:
	explicit property_class(QObject *parent = nullptr);

	QString str_value() const;

  signals:

	void srt_valueChanged(QString srt_value);

  public slots:
	void set_str_value(QString str_value);

	void print();
};

#endif // PROPERTY_CLASS_H
