# Day-15 | Documenting What I Learned

## Topic: Converting Markdown to HTML

Today, I learned about **Python Virtual Environments** to manage project dependencies separately. A virtual environment allows us to create an isolated workspace on the same machine. This means:

- We can work on projects **without affecting global Python settings**.
- We can **install and use different versions of packages** in separate projects safely.

### Setting Up a Python Virtual Environment

To create a virtual environment named `workspace`, I used:

```bash
python3 -m venv workspace
```
To activate the virtual environment (on Windows), the command is:
```bash
.\workspace\Scripts\activate
```
Once activated, I installed the markdown library for converting Markdown files to HTML:
```bash
pip install markdown
```
With the markdown library, we can convert Markdown files into HTML files. This is useful for:

- Creating web-friendly documentation from Markdown notes.

- Maintaining consistent styling across different documentation pages.

- Sharing project documentation easily on websites or GitHub Pages.
