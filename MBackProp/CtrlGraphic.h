/*
	Noel Lopes is a Professor Assistant at the Polytechnic Institute of Guarda, Portugal (for more information see readme.txt)
    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010 Noel de Jesus Mendon�a Lopes

	This file is part of Multiple Back-Propagation.

    Multiple Back-Propagation is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// Graphic wrapper class

class Graphic : public CWnd
{
protected:
	DECLARE_DYNCREATE(Graphic)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xD88F010C, 0x321C, 0x11D3, { 0x87, 0x6, 0xE7, 0x54, 0x9F, 0x7F, 0x7D, 0x3C } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:
	LPFONTDISP GetFont();
	void SetFont(LPFONTDISP);
	BOOL GetConsiderPreviousScale();
	void SetConsiderPreviousScale(BOOL);

// Operations
public:
	void Clear();
	void SetScale(double min, double max);
	void InsertLine(double* data, LPCTSTR name);
	void SetNumberPointsDraw(long number, double scale);
	void Rescale(double originalMinimum, double originalMaximum, double actualMinimum, double actualMaximum);
	void HorizontalAxe(LPCTSTR name, double startValue, long integerValues);
	void AboutBox();
};