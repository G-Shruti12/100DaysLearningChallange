import markdown as md;
def convert_To_Html(source,destination):
    try:
        with open(source, 'r', encoding='utf-8') as f:
          m_txt = f.read()
          print("Markdown content length:", len(m_txt))
            # code of markdown file
        h_text=md.markdown(m_txt)
        with open(destination,'w') as d:
            d.write(h_text)
    except Exception as e:
        print("Error:", e)
convert_To_Html("sample.md","md.html")    
