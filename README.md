<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:0d1117,50:161b22,100:238636&height=180&section=header&text=Ermenson%20Marcos&fontSize=45&fontColor=c9d1d9&animation=fadeIn&fontAlignY=32&desc=🛡️%20Offensive%20Security%20Specialist%20•%20Red%20Team%20•%20CVE%20Research&descSize=16&descAlignY=55"/>

<img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&weight=600&size=18&duration=3000&pause=1000&color=238636&center=true&vCenter=true&width=560&lines=Red+Team+%7C+Penetration+Testing;Original+RCE+Research+%7C+PoC+Dev+for+Public+CVEs;16+Vulns+in+Fintech+Audit+%7C+2+Critical;Breaking+systems+to+make+them+unbreakable" alt="Typing SVG" />

<br/>

[![Portfolio](https://img.shields.io/badge/🌐_Portfolio-ermensonjr.com-238636?style=for-the-badge&labelColor=0d1117)](https://ermensonjr.com)
[![Email](https://img.shields.io/badge/📧_Email-ermenson.sec-dc3545?style=for-the-badge&labelColor=0d1117)](mailto:ermenson.sec@gmail.com)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white&labelColor=0d1117)](https://www.linkedin.com/in/ermensonx)
[![GitHub](https://img.shields.io/github/followers/Ermensonx?style=for-the-badge&logo=github&logoColor=white&labelColor=0d1117&color=238636&label=Follow)](https://github.com/Ermensonx)

</div>

---

## 💀 About Me

> Offensive security specialist focused on **original vulnerability research**, exploit development and red team operations. I find bugs, build reproducible PoCs, and write up the full chain — from the serialized byte to RCE.

```rust
struct OffensiveSecuritySpecialist {
    name: &'static str,
    alias: &'static str,
    role: &'static str,
    original_research: u8,    // self-found bugs (PoisonJar — CVE under review)
    public_cve_pocs: u8,      // complete PoCs for CVEs disclosed by others
    vulns_in_audits: u8,
}

impl OffensiveSecuritySpecialist {
    fn whoami() -> Self {
        Self {
            name: "Ermenson Marcos Rodrigues Jr",
            alias: "Ermensonx",
            role: "Offensive Security Specialist",
            original_research: 1,   // PoisonJar — Nextcloud pre-auth RCE
            public_cve_pocs: 2,     // MongoBleed, MadLicense
            vulns_in_audits: 16,
        }
    }

    fn expertise(&self) -> Vec<&str> {
        vec![
            "Red Team Operations",
            "Web Application Pentesting",
            "CVE Research & Exploit Dev",
            "Fintech Security Auditing",
        ]
    }
}
```

---

## 🏆 Achievements

<div align="center">

### 🔬 Pesquisa Original & Desenvolvimento de PoCs

*Pesquisa própria de vulnerabilidades e desenvolvimento de ferramentas de validação reproduzíveis*

| **PoisonJar** | **CVE-2025-14857** | **CVE-2024-38077** | **Fintech Audit** |
|:---:|:---:|:---:|:---:|
| Nextcloud Pre-Auth RCE | **MongoBleed** | **MadLicense** | **16 Vulnerabilities** |
| CWE-502 · Redis Poisoning | CVSSv4 8.7 High | CVSS 9.8 Critical | 2 Critical • 3 High |
| 🌟 **Pesquisa original** | Pre-auth Memory Leak | Windows RCE | Payment Flow Compromise |
| CVE em análise (MITRE) | PoC mais completa | PoC p/ validação de patch | Full Security Assessment |

</div>

> 🌟 **Pesquisa original — PoisonJar:** RCE pré-autenticação no **Nextcloud** via `unserialize()` inseguro sobre dados do cache Redis (**CWE-502**), encadeando o gadget `FileCookieJar` até um webshell como `www-data`. Writeup técnico completo + PoC/lab reproduzível. *CVE atualmente em análise no MITRE (contestado pelo fornecedor).*

> 🔥 **MongoBleed:** autor da **PoC pública mais completa** para **CVE-2025-14857** — vazamento de memória heap pré-autenticação no MongoDB, baseado na análise do breach do Rainbow Six Siege. *CVE não descoberto por mim.*

---

## ⚔️ Expertise

<div align="center">

| 🔴 Red Team | 🌐 Web Security | 🔐 Compliance | 🐍 Development |
|:---:|:---:|:---:|:---:|
| APT Simulation | OWASP Top 10 | PCI-DSS | Python/Rust |
| Social Engineering | API Hacking | ISO 27001 | Exploit Dev |
| OSINT & Recon | Auth Bypass | LGPD/GDPR | Custom Tools |
| Phishing Ops | Business Logic | PTES | PoC Development |
| CVE Research | Source Code Review | SOC 2 | Automation |

</div>

---

## 🧰 Arsenal

<div align="center">

**Languages & Scripting**

![Rust](https://img.shields.io/badge/Rust-0d1117?style=for-the-badge&logo=rust&logoColor=dea584)
![Python](https://img.shields.io/badge/Python-0d1117?style=for-the-badge&logo=python&logoColor=3776AB)
![C](https://img.shields.io/badge/C-0d1117?style=for-the-badge&logo=c&logoColor=A8B9CC)
![Bash](https://img.shields.io/badge/Bash-0d1117?style=for-the-badge&logo=gnubash&logoColor=4EAA25)
![JavaScript](https://img.shields.io/badge/JavaScript-0d1117?style=for-the-badge&logo=javascript&logoColor=F7DF1E)
![PowerShell](https://img.shields.io/badge/PowerShell-0d1117?style=for-the-badge&logo=powershell&logoColor=5391FE)

**Offensive Tools**

![Burp Suite](https://img.shields.io/badge/Burp_Suite-0d1117?style=for-the-badge&logo=PortSwigger&logoColor=FF6633)
![Metasploit](https://img.shields.io/badge/Metasploit-0d1117?style=for-the-badge&logo=hackthebox&logoColor=2596CD)
![Nmap](https://img.shields.io/badge/Nmap-0d1117?style=for-the-badge&logo=windowsterminal&logoColor=white)
![Wireshark](https://img.shields.io/badge/Wireshark-0d1117?style=for-the-badge&logo=wireshark&logoColor=1679A7)
![Ghidra](https://img.shields.io/badge/Ghidra-0d1117?style=for-the-badge&logo=ghost&logoColor=red)
![Cobalt Strike](https://img.shields.io/badge/Cobalt_Strike-0d1117?style=for-the-badge&logo=target&logoColor=dc3545)

**Platforms & Infra**

![Kali Linux](https://img.shields.io/badge/Kali_Linux-0d1117?style=for-the-badge&logo=kalilinux&logoColor=557C94)
![Docker](https://img.shields.io/badge/Docker-0d1117?style=for-the-badge&logo=docker&logoColor=2496ED)
![Kubernetes](https://img.shields.io/badge/Kubernetes-0d1117?style=for-the-badge&logo=kubernetes&logoColor=326CE5)
![AWS](https://img.shields.io/badge/AWS-0d1117?style=for-the-badge&logo=amazonaws&logoColor=FF9900)
![Azure](https://img.shields.io/badge/Azure-0d1117?style=for-the-badge&logo=microsoftazure&logoColor=0078D4)

</div>

---

## 🚀 Featured Projects

<div align="center">

### 🌟 [PoisonJar — Nextcloud Pre-Auth RCE](https://github.com/Ermensonx/Poc-PoisonJar)

<img src="https://img.shields.io/badge/Original_Research-238636?style=flat-square&labelColor=0d1117"/>
<img src="https://img.shields.io/badge/CWE--502-Deserialization-ff6b35?style=flat-square&labelColor=0d1117"/>
<img src="https://img.shields.io/badge/Pre--Auth-RCE-dc3545?style=flat-square&labelColor=0d1117"/>
<img src="https://img.shields.io/badge/CVE-Under_MITRE_Review-9b59b6?style=flat-square&labelColor=0d1117"/>

Pesquisa **original**: RCE pré-autenticação no Nextcloud via *cache poisoning* no Redis → `unserialize()` inseguro → gadget `FileCookieJar` → webshell como `www-data`. Inclui **lab Docker isolado** + **exploit sem dependências** (PT/EN) e writeup técnico completo.

`Python` · `PHP` · `Redis` · `CWE-502` · `Original Research`

</div>

<table>
<tr>
<td width="50%" valign="top">

### [CVE-2025-14857 MongoBleed](https://github.com/Ermensonx/CVE-2025-14857-MongoBleed)

<img src="https://img.shields.io/badge/CVE-High-ff6b35?style=flat-square&labelColor=0d1117"/>
<img src="https://img.shields.io/badge/CVSSv4-8.7-ff6b35?style=flat-square&labelColor=0d1117"/>

PoC completo para **MongoBleed** — vazamento de memória heap pré-autenticação em MongoDB 7.0.5. Baseado no ataque real ao Rainbow Six Siege. *CVE descoberto por terceiros.*

`Python` `MongoDB` `Memory Leak` `CVE Research`

</td>
<td width="50%" valign="top">

### [CVE-2024-38077 MadLicense](https://github.com/Ermensonx/CVE-2024-38077-MadLicense-exploit)

<img src="https://img.shields.io/badge/CVE-Critical-dc3545?style=flat-square&labelColor=0d1117"/>
<img src="https://img.shields.io/badge/RCE-Unauthenticated-ff6b35?style=flat-square&labelColor=0d1117"/>

PoC para a vulnerabilidade **MadLicense** no Windows RD Licensing Service. RCE crítica para validação de patches. *CVE descoberto por terceiros.*

`Python` `Windows` `RCE` `Exploitation`

</td>
</tr>
<tr>
<td width="50%" valign="top">

### [MyStealerLab](https://github.com/Ermensonx/MyStealerLab)

<img src="https://img.shields.io/badge/Purpose-Educational-238636?style=flat-square&labelColor=0d1117"/>
<img src="https://img.shields.io/badge/Language-Rust-dea584?style=flat-square&labelColor=0d1117"/>

Laboratório de estudo de malware em **Rust**. Projeto educacional para análise de técnicas de coleta e desenvolvimento de defesas.

`Rust` `Malware Analysis` `Educational`

</td>
<td width="50%" valign="top">

### [Desec-Scripts](https://github.com/Ermensonx/Desec-Scripts)

<img src="https://img.shields.io/badge/Type-Tooling-238636?style=flat-square&labelColor=0d1117"/>
<img src="https://img.shields.io/badge/Focus-Automation-4EAA25?style=flat-square&labelColor=0d1117"/>

Coleção de scripts para **Desec Security**. Automação de reconnaissance, scanning e análise de vulnerabilidades.

`Shell` `Automation` `Pentest` `OSINT`

</td>
</tr>
</table>

---

## 📊 GitHub Analytics

<div align="center">

![Ermensonx's GitHub Stats](https://github-profile-summary-cards.vercel.app/api/cards/profile-details?username=Ermensonx&theme=github_dark)

<br/>

![Stats](https://github-profile-summary-cards.vercel.app/api/cards/stats?username=Ermensonx&theme=github_dark)
![Languages](https://github-profile-summary-cards.vercel.app/api/cards/repos-per-language?username=Ermensonx&theme=github_dark)

<br/>

![Commits](https://github-profile-summary-cards.vercel.app/api/cards/productive-time?username=Ermensonx&theme=github_dark&utcOffset=-3)

</div>

---

## 🔬 Vulnerability Research

<div align="center">

| ID | Nome | Severidade | Origem | Status |
|:---:|:---:|:---:|:---:|:---:|
| 🟣 **PoisonJar** | Nextcloud Pre-Auth RCE | CWE-502 | 🌟 Pesquisa original | 🔄 CVE em análise (MITRE) |
| **CVE-2025-14857** | MongoBleed | CVSSv4 **8.7** | PoC (CVE de terceiros) | ✅ PoC público |
| **CVE-2024-38077** | MadLicense | 🔴 CVSS **9.8** | PoC (CVE de terceiros) | ✅ PoC público |
| 🔒 **Em pesquisa** | TBD | ⏳ Pending | Pesquisa original | 🔄 Responsible Disclosure |

<sub>🌟 **Pesquisa original** = vulnerabilidade encontrada por mim · **PoC (CVE de terceiros)** = ferramenta de validação para uma falha já divulgada publicamente.</sub>

</div>

---

## 🎓 Certificações & Formação

<div align="center">

### 📚 Formação Acadêmica

| Curso | Status | Instituição |
|:---:|:---:|:---:|
| 🎓 **Tecnologia em Sistemas de Informação** | 5º Semestre | ITE — Instituição Toledo de Ensino |

### 🛡️ Certificações em Progresso

| Certificação | Foco | Instituição |
|:---:|:---:|:---:|
| **DCPT** — Desec Certified Penetration Tester | Web Pentest, Network Security, Report Writing | Desec Security |
| **CRTA** — Certified Red Team Analyst | Red Team Ops, MITRE ATT&CK, Adversary Simulation | CyberWarFare Labs |

### ✅ Certificações Concluídas

| Certificação | Descrição | Instituição |
|:---:|:---:|:---:|
| **PEv1** — Pentest Experience | Certificação hands-on em cenários reais | Certificação Prática |
| **Novo Pentest Profissional** | 200h — OSINT, Exploitation, Social Eng, Priv Esc | Desec Security |
| 🌐 **Redes para Segurança da Informação** | Protocolos, Infraestrutura, Attack Vectors | Afonso da Silva |
| 🔐 **Segurança da Informação** | Fundamentos, Políticas, Compliance | Senac |

</div>

---

## 📫 Let's Connect

<div align="center">

[![Email](https://img.shields.io/badge/Email-ermenson.sec@gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white&labelColor=0d1117)](mailto:ermenson.sec@gmail.com)
[![Portfolio](https://img.shields.io/badge/Portfolio-ermensonjr.com-238636?style=for-the-badge&logo=googlechrome&logoColor=white&labelColor=0d1117)](https://ermensonjr.com)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-ermensonx-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white&labelColor=0d1117)](https://www.linkedin.com/in/ermensonx)
[![GitHub](https://img.shields.io/badge/GitHub-Ermensonx-171515?style=for-the-badge&logo=github&logoColor=white&labelColor=0d1117)](https://github.com/Ermensonx)

<br/>

```
🎯 "The only way to know if a system is secure is to try to break it."
```

<br/>

<img src="https://komarev.com/ghpvc/?username=Ermensonx&color=238636&style=for-the-badge&label=PROFILE+VIEWS"/>

</div>

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:238636,50:161b22,100:0d1117&height=100&section=footer"/>
