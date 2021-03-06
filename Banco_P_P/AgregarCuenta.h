#ifndef AGREGARCUENTA_H
#define AGREGARCUENTA_H

//(*Headers(AgregarCuenta)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class AgregarCuenta: public wxDialog
{
	public:

		AgregarCuenta(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AgregarCuenta();

		//(*Declarations(AgregarCuenta)
		wxButton* ButtonBuscar;
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxChoice* Choice1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxTextCtrl* TextCtrlDNI;
		wxTextCtrl* TextCtrlSaldo;
		//*)

	protected:

		//(*Identifiers(AgregarCuenta)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTONCONFIRMAR;
		static const long ID_BUTTONSALIR;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(AgregarCuenta)
		void OnInit(wxInitDialogEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButtonSalirClick(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButtonBuscarClick(wxCommandEvent& event);
		void OnButtonConfirmarClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
