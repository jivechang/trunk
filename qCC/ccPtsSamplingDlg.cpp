//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#include "ccPtsSamplingDlg.h"

ccPtsSamplingDlg::ccPtsSamplingDlg(QWidget* parent/*=0*/)
	: QDialog(parent), Ui::PointsSamplingDialog()
{
	setupUi(this);

	setWindowFlags(Qt::Tool/*Qt::Dialog | Qt::WindowStaysOnTopHint*/);
}

bool ccPtsSamplingDlg::generateNormals() const
{
	return normalsCheckBox->isChecked();
}

bool ccPtsSamplingDlg::interpolateRGB() const
{
	return colorsCheckBox->isChecked();
}

bool ccPtsSamplingDlg::interpolateTexture() const
{
	return textureCheckBox->isChecked();
}

bool ccPtsSamplingDlg::useDensity() const
{
	return dRadioButton->isChecked();
}

double ccPtsSamplingDlg::getDensityValue() const
{
	return dDoubleSpinBox->value();
}

void ccPtsSamplingDlg::setDensityValue(double density)
{
	dDoubleSpinBox->setValue(density);
}

unsigned ccPtsSamplingDlg::getPointsNumber() const
{
	return pnSpinBox->value();
}

void ccPtsSamplingDlg::setPointsNumber(int count)
{
	pnSpinBox->setValue(count);
}
