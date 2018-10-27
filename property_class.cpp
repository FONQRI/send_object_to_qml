#include "property_class.h"
#include <QDebug>

property_class::property_class(QObject *parent) : QObject(parent) {}

QString property_class::str_value() const { return m_str_value; }

void property_class::set_str_value(QString str_value)
{
	if (m_str_value == str_value)
	return;

	m_str_value = str_value;
	emit srt_valueChanged(m_str_value);
}

void property_class::print() { qDebug() << m_str_value; }
