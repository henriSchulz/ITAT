# ITAT - Informatik und Automatisierungstechnik Referenz

Ein umfassendes LaTeX-basiertes Referenzdokument für Informatik und Automatisierungstechnik, das als kompaktes Nachschlagewerk und Spickzettel dient.

## 📖 Übersicht

Dieses Projekt erstellt eine strukturierte Zusammenfassung wichtiger Konzepte aus den Bereichen:
- **Programmierung** (C++, Structured Text)
- **Kompilierungsprozesse**
- **Datenstrukturen und Algorithmen**
- **Rechnerarchitekturen**
- **Automatisierungstechnik**

Das Dokument wird als mehrspaltige A3-Referenz im Querformat optimiert, um maximale Informationsdichte zu erreichen.

## 🚀 Verwendung

### Voraussetzungen

- LaTeX-Distribution (z.B. TeX Live, MiKTeX)
- pdflatex

### PDF Generierung

#### Option 1: Shell-Script (empfohlen)
```bash
./run.sh
```

#### Option 2: Direkte pdflatex-Ausführung
```bash
pdflatex -interaction=nonstopmode -file-line-error main.tex
```

### Ausgabe

Das generierte `main.pdf` enthält eine kompakte, vierspaltige Referenz optimiert für A3-Format im Querformat.

## 📁 Projektstruktur

```
ITAT/
├── main.tex           # Hauptdokument mit LaTeX-Code
├── run.sh             # Build-Script
├── cleanup.py         # Bereinigungsscript für temporäre Dateien
├── assets/            # Grafiken und Ressourcen
│   ├── ATC.png        # Automatisierungstechnik Diagramme
│   ├── ATP.png
│   └── ATT.png
└── README.md          # Diese Datei
```

## 🎨 Features

### Code-Highlighting
- **C++**: Vollständige Syntax-Hervorhebung mit Zeilennummern
- **Structured Text (ST)**: Spezielle Konfiguration für SPS-Programmierung
- Konfigurierbare Farbschemata und Formatierung

### Layout-Optimierung
- Vierspaltige Darstellung für maximale Informationsdichte
- Angepasste Seitenränder für A3-Querformat
- Kompakte Überschriften und Abstände
- Spezielle Befehle für Formeln und Datenstrukturen

### Inhaltsorganisation
- Strukturierte Kapitel und Unterkapitel
- Hervorgehobene Algorithmen und Datenstrukturen
- Tabellarische Übersichten und Vergleiche
- Grafische Darstellungen aus `assets/`

## 🛠 Anpassung

### Neue Inhalte hinzufügen
1. Bearbeiten Sie `main.tex`
2. Verwenden Sie die vordefinierten Befehle:
   - `\algo{...}` für Algorithmus-Hervorhebung
   - `\datastruct{...}` für Datenstruktur-Hervorhebung
   - `\formel{...}` für mathematische Formeln

### Stil-Anpassungen
- Farbschemas in den `lstdefinestyle`-Bereichen anpassen
- Layout-Parameter in der `geometry`-Konfiguration ändern
- Schriftgrößen über die `titleformat`-Definitionen anpassen

## 🧹 Bereinigung

Temporäre LaTeX-Dateien können mit dem bereitgestellten Script entfernt werden:
```bash
python cleanup.py
```

## 📄 Lizenz

MIT License. Siehe `LICENSE` für Details.

## 🤝 Beiträge

Verbesserungen und Erweiterungen sind willkommen! Bitte beachten Sie:
- Konsistente LaTeX-Formatierung
- Kompakte und präzise Inhalte
- Korrekte deutsche Rechtschreibung
- Testen der PDF-Generierung vor Commits

## 📞 Kontakt

Bei Fragen oder Anregungen wenden Sie sich an den Repository-Inhaber.

---

*Erstellt für das Studium der Elektro- und Informationstechnik*