# Contributing to This ePortfolio

This document describes how to contribute to and collaborate on this Computer Science ePortfolio.

## Overview

This is a professional ePortfolio project demonstrating Computer Science competencies, with contributions following industry-standard practices. We welcome feedback, suggestions, and collaborative improvements.

## Getting Started

### Prerequisites
- Git knowledge and GitHub account
- Understanding of the project structure
- Familiarity with the CS-499 course outcomes

### Project Structure
```
krazzydrako.github.io/
├── README.md                          # Main portfolio overview
├── COURSE_OUTCOMES.md                 # Detailed outcome evidence
├── index.html                         # Portfolio website
├── Thermostat - edited.py             # Enhancement 1: Software Engineering
├── ProjectOne - edited.cpp            # Enhancement 2: Algorithms & Security
├── travlr edited files.zip            # Enhancement 3: Database & Full-Stack
├── [Module Journals]                  # Reflective documentation
├── [Milestone Documents]              # Progress reports
└── [Additional Documentation]
```

## Collaboration Guidelines (CS-499-01: Diverse Audiences)

### Issue Creation
When identifying improvements or concerns:

1. **Check existing issues** to avoid duplicates
2. **Use descriptive titles** that clearly state the issue
3. **Provide context** including what the issue affects
4. **Reference course outcomes** if applicable

**Example Issue:**
```
Title: Improve accessibility in index.html
Body:
- Issue: Images missing alt text
- Impact: Users with visual impairments cannot access content
- Course Outcome: CS-499-01 (Collaborative Environments for Diverse Audiences)
- Suggestion: Add descriptive alt text to all images
```

### Pull Request Process

#### 1. Create a Feature Branch
```bash
git checkout -b feature/description-of-change
git checkout -b bugfix/description-of-issue
```

#### 2. Make Changes Following Best Practices
- **Code Style:** Follow language-specific conventions
- **Comments:** Add docstrings and explanatory comments
- **Testing:** Include test cases for new functionality
- **Documentation:** Update relevant documentation

#### 3. Commit with Clear Messages
Follow the format: `[Type] Description`

Examples:
```
[feat] Add security validation to user input handler
[fix] Correct energy calculation algorithm in thermostat
[docs] Update deployment instructions
[test] Add unit tests for notification system
[refactor] Improve thermostat data structure efficiency
```

#### 4. Push and Create Pull Request
```bash
git push origin feature/description-of-change
```

Create PR with:
- **Title:** Clear, descriptive summary
- **Description:** Why the change? What problem does it solve?
- **Course Outcome Alignment:** Which CS-499 outcome does this address?
- **Testing:** How was this tested? What edge cases considered?

**Example PR Description:**
```markdown
## Description
Enhances the thermostat notification system with improved error handling and user-facing error messages.

## Problem Addressed
Users receive unclear error messages when notifications fail to send, leading to confusion about system status.

## Solution
Implemented comprehensive error handling with user-friendly messages and logging for debugging.

## Course Outcome Alignment
- CS-499-01: Improved clarity for diverse user technical abilities
- CS-499-02: Professional error communication
- CS-499-05: Error handling as security best practice

## Testing
- Unit tests: 15 new tests added (all passing)
- Manual testing: Tested with network failures, invalid credentials
- Edge cases: Tested with extreme message sizes, special characters
```

#### 5. Code Review & Collaboration
- Address reviewer comments professionally
- Re-request review after changes
- Engage in technical discussion
- Ask clarifying questions respectfully

### Commit Message Conventions

Use conventional commits for clarity:

```
[Type]: [Brief description]

[Detailed explanation of the change, why it was made, and impact]

Related: [Issue or PR numbers if applicable]
Outcome: [CS-499 outcome addressed]
```

Types:
- `feat` - New feature
- `fix` - Bug fix
- `docs` - Documentation changes
- `test` - Test additions or changes
- `refactor` - Code restructuring
- `perf` - Performance improvements
- `security` - Security enhancements
- `accessibility` - Accessibility improvements

## Code Quality Standards

### Documentation (CS-499-02: Professional Communication)
- All functions have docstrings
- Complex algorithms include explanation
- Examples provided for public APIs
- Design decisions documented

### Testing (CS-499-03: Design & Evaluate)
- Unit test coverage > 80%
- Integration tests for critical paths
- Edge cases documented and tested
- Performance tests for optimization-critical code

### Security (CS-499-05: Security Mindset)
- Input validation on all user data
- No hardcoded secrets or credentials
- Security-relevant changes marked clearly
- Vulnerability assessment included in PR

### Accessibility (CS-499-01: Collaborative Environments)
- WCAG 2.1 Level AA compliance for web changes
- Semantic HTML structure
- Keyboard navigation support
- Screen reader compatibility

## Professional Communication Guidelines

### Written Communication
- **Clear and Concise:** Use simple language without sacrificing precision
- **Respectful Tone:** Maintain professionalism in all interactions
- **Constructive Feedback:** Focus on the code/content, not the person
- **Inclusive Language:** Avoid jargon or explain technical terms

### Code Review Comments
Good Example:
```
Consider using parameterized queries here to prevent SQL injection. 
See OWASP guidelines [link]. Would you like me to suggest an 
alternative implementation?
```

Poor Example:
```
This is insecure. Fix it.
```

### Discussion Etiquette
- Ask questions when unclear
- Share credit for good ideas
- Acknowledge when someone has a better approach
- Admit mistakes gracefully

## Reporting Security Issues

For security vulnerabilities:
1. **Do not create a public issue**
2. **Email security details** to the repository owner
3. **Include impact assessment** using CVSS framework
4. **Allow time for patching** before public disclosure (90 days standard)

## Documentation Standards

### README & Technical Docs
- Purpose and scope clearly stated
- Prerequisites listed
- Installation/setup instructions
- Usage examples provided
- Troubleshooting section for common issues
- References and additional resources

### Code Documentation
```python
def send_notification(user_id: str, message: str, method: str = "email") -> bool:
    """
    Send a notification to a user through specified method.
    
    Args:
        user_id: Unique identifier for the user
        message: Notification message content (max 500 chars)
        method: Delivery method ('email', 'sms', 'push'). Default: 'email'
    
    Returns:
        True if notification sent successfully, False otherwise
    
    Raises:
        ValueError: If user_id is empty or message exceeds limit
        NotificationError: If delivery fails after retries
    
    Example:
        >>> send_notification("user_123", "Temperature alert!", "email")
        True
    
    Security:
        - Validates user permissions before sending
        - Sanitizes message content
        - Logs all notification attempts
    """
```

## Review Checklist for Maintainers

- [ ] Code follows style guide
- [ ] Documentation is complete and accurate
- [ ] Tests included and passing
- [ ] Security review completed
- [ ] Accessibility verified
- [ ] No breaking changes (or properly versioned)
- [ ] Course outcome alignment verified
- [ ] Professional quality maintained

## Professional Development & Continuous Improvement

This project represents ongoing professional growth. Contributions should:
- **Elevate Quality:** Make the portfolio stronger and more polished
- **Demonstrate Learning:** Show application of new skills and knowledge
- **Add Value:** Contribute meaningfully to course outcome demonstration
- **Reflect Best Practices:** Exemplify industry standards

## Licensing & Attribution

All contributions are made under the same license as the main project. Contributors grant rights to use their contributions in the ePortfolio.

## Questions or Concerns?

For questions about contributing:
- Check existing documentation and issues
- Review course material (CS-499)
- Reach out via GitHub discussions or email

---

## CS-499 Course Outcome Alignment

This contribution process itself demonstrates the course outcomes:

- **CS-499-01:** Collaborative environment for diverse contributors
- **CS-499-02:** Clear communication standards and documentation
- **CS-499-03:** Professional design and evaluation process
- **CS-499-04:** Industry-standard tools (Git, GitHub, PR workflow)
- **CS-499-05:** Security practices for code review and deployment

---

*Last Updated: 2026-04-29*
*Contributing Guidelines | CS-499 Capstone ePortfolio*