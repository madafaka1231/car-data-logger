/*
* Copyright (C) 2017, IVIS
*
* This file is part of GENIVI Project CDL - Car Data Logger.
*
* This Source Code Form is subject to the terms of the
* Mozilla Public License (MPL), v. 2.0.
* If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*
* For further information see http://www.genivi.org/.
*/

/*!
* \author Seok-Heum Choi <seokheum.choi@ivisolution.com>
*
* \copyright Copyright (c) 2017, IVIS \n
* License MPL-2.0: Mozilla Public License version 2.0 http://mozilla.org/MPL/2.0/.
*
*/

import QtQuick 2.2

Item {
    id: gear
    objectName: 'Gear'

    width: 26
    height: 30

    property url gearImageURL: ''
    property int gearState: 0
    property variant gearImageList: [
        "../image/genivi_16th_amm/Gear/P_Assistor.png",
        "../image/genivi_16th_amm/Gear/R_Assistor.png",
        "../image/genivi_16th_amm/Gear/N_Assistor.png",
        "../image/genivi_16th_amm/Gear/D_Assistor.png"
    ]


    Image {
        id: gearImage
        anchors.fill: parent
        source: gearImageList[gearState]
    }
}
