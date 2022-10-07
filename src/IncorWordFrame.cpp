#include "wx/wxprec.h"

#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

#include "IncorWordFrame.hpp"

IncorWordFrame::IncorWordFrame(const wxChar *title, int xpos, int ypos, int width, int height, std::vector<*GermanWord> words)
    : wxFrame((wxFrame *) NULL, -1, title, wxPoint(xpos, ypos), wxSize(width, height), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
    {
        m_pBoxSizer = new wxBoxSizer( wxVERTICAL );
        m_pFlexGridSizer = new wxFlexGridSizer(2);

        formList = m_pGermanWord->returnAllForms();
        wxString BaseForm("Base Word:");
        wxString BaseLabel = BaseForm + formList[0];

        m_pBoxSizer->Add(
            new wxStaticText(this, wxID_ANY, BaseLabel, wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString IchForm("Ich Form:");
        wxString IchLabel = IchForm + formList[1];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, IchLabel , wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString WirForm("Wir Form:");
        wxString WirLabel = WirForm + formList[2];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, WirLabel , wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString DuForm("Du Form:");
        wxString DuLabel = DuForm + formList[3];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, DuLabel , wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString IhrForm("Ihr Form:");
        wxString IhrLabel = IhrForm + formList[4];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, IhrLabel, wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString ErForm("Er Form:");
        wxString ErLabel = ErForm + formList[5];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, ErLabel , wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString SieTheyForm("Sie Form:");
        wxString SieTheyFormLabel = SieTheyForm + formList[6];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, SieTheyFormLabel , wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString SieHerForm("Sie Form:");
        wxString SieHerLabel = SieHerForm + formList[7];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, SieHerLabel, wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString SieFormalForm("Sie Form:");
        wxString SieFormalLabel = SieFormalLabel + formList[8];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, SieHerLabel, wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        formList = m_pGermanWord->returnAllForms();
        wxString EsForm("Es Form:");
        wxString EsLabel = EsForm + formList[9];

        m_pFlexGridSizer->Add(
            new wxStaticText(this, wxID_ANY, EsLabel, wxDefaultPosition, wxDefaultSize),
            wxSizerFlags().Align(0).Shaped().Center()
        );

        m_pBoxSizer->Add(
            m_pFlexGridSizer,
            wxSizerFlags(1).Align(0).Expand().Border(wxALL, 10)
        );

        m_pBackButton = new wxButton(this, 12, wxT("Back"));

        m_pBoxSizer->Add(
            m_pBackButton,
            wxSizerFlags().Align(0).Center().Border(wxALL, 10)
        );


        SetSizerAndFit(m_pBoxSizer);
    
    }

ResultsFrame::OnBackClick(wxCommandEvent &event, *wxButton word)
{
    // jump back to results window
    
}