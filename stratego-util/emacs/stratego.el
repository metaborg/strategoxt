(setq auto-mode-alist (cons '("\\.r\\'" . stratego-mode) auto-mode-alist))
(setq auto-mode-alist (cons '("\\.ss\\'" . stratego-mode) auto-mode-alist))

(defvar stratego-mode-hook nil
  "Normal hook run when entering Stratego mode.")

(defvar stratego-mode-map nil
  "Keymap for Stratego mode.")

;;;(if stratego-mode-map
;;;    nil
;;;    (progn 
(setq stratego-mode-map (make-sparse-keymap))
;;;	   (define-key stratego-mode-map "\C-m"
;;;	     'reindent-then-newline-and-indent)
;;;	   (define-key stratego-mode-map "\C-j" 'newline)
	   (define-key stratego-mode-map [tab] 'tab-to-tab-stop)
;;;))

(defvar stratego-mode-syntax-table nil
  "Syntax table for Stratego mode.")

(if stratego-mode-syntax-table
    nil
    (progn
      (setq stratego-mode-syntax-table (make-syntax-table))
      (modify-syntax-entry ?( "() 1" stratego-mode-syntax-table)
      (modify-syntax-entry ?) ")( 4" stratego-mode-syntax-table)
;;;      (modify-syntax-entry ?< "(>" stratego-mode-syntax-table)
;;;      (modify-syntax-entry ?> ")<" stratego-mode-syntax-table)
      (modify-syntax-entry ?* ". 23" stratego-mode-syntax-table)
      (modify-syntax-entry ?\' "w" stratego-mode-syntax-table)
      (modify-syntax-entry ?\\ "\\" stratego-mode-syntax-table)))

(defvar sdf2-mode-syntax-table t
  "Syntax table for SDF2 mode.")

(if sdf2-mode-syntax-table
    (progn
  (setq sdf2-mode-syntax-table (make-syntax-table))
  (modify-syntax-entry ?% "<" sdf2-mode-syntax-table)
  (modify-syntax-entry ?\n ">" sdf2-mode-syntax-table)
  (modify-syntax-entry ? ">" sdf2-mode-syntax-table)
  (modify-syntax-entry ?\' "w" sdf2-mode-syntax-table)
  (modify-syntax-entry ?\\ "\\" sdf2-mode-syntax-table)))
  
(defvar stratego-mode-abbrev-table nil
  "Abbrev table used while in stratego mode.")
(define-abbrev-table 'stratego-mode-abbrev-table ())


(defun stratego-mode ()
  "Major mode for editing Stratego specifications"
  (interactive)
  (kill-all-local-variables)
  (use-local-map stratego-mode-map)
  (set-syntax-table stratego-mode-syntax-table)
  (setq local-abbrev-table stratego-mode-abbrev-table)
  (setq major-mode 'stratego-mode)
  (setq mode-name "Stratego")
  
  (make-local-variable 'indent-line-function)
  (setq indent-line-function 'stratego-indent-line)

  (make-local-variable 'comment-start-skip)
  (setq comment-start-skip "(\\*+ *")
  (make-local-variable 'comment-start)
  (setq comment-start "(* ")
  (make-local-variable 'comment-end)
  (setq comment-end   " *)")
  (make-local-variable 'comment-multi-line)
  (setq comment-multi-line t)
  (make-local-variable 'comment-indent-function)
  (setq comment-indent-function 'stratego-comment-indent)

  (make-local-variable 'font-lock-defaults)
  (setq font-lock-defaults '(stratego-keywords nil nil nil nil))
			     
  (run-hooks 'stratego-mode-hook))

(defun sdf2-mode ()
  "Major mode for editing SDF2 specifications"
  (interactive)
  (kill-all-local-variables)
  (use-local-map stratego-mode-map)
  (set-syntax-table sdf2-mode-syntax-table)
  (setq local-abbrev-table stratego-mode-abbrev-table)
  (setq major-mode 'sdf2-mode)
  (setq mode-name "SDF2")
  
  (make-local-variable 'indent-line-function)
  (setq indent-line-function 'sdf2-indent-line)

  (make-local-variable 'comment-start-skip)
  (setq comment-start-skip "%%+ *")
  (make-local-variable 'comment-start)
  (setq comment-start "%% ")
  (make-local-variable 'comment-end)
  (setq comment-end "")
  (make-local-variable 'comment-multi-line)
  (setq comment-multi-line nil)
  (make-local-variable 'comment-indent-function)
  (setq comment-indent-function 'stratego-comment-indent)

  (make-local-variable 'font-lock-defaults)
  (setq font-lock-defaults '(sdf2-keywords nil nil nil nil))
			     
  (run-hooks 'stratego-mode-hook))

(defvar stratego-keywords
  '("\\<module\\>" "\\<imports\\>" "\\<exports\\>" "\\<rules\\>" "\\<not\\>"
    "\\<operations\\>" "\\<constructors\\>" "\\<stratego\\>" "\\<script\\>" 
    "\\<strategies\\>" "\\<signature\\>" "\\<sorts\\>" "\\<overlays\\>"
    "\\<load\\>" "\\<dump\\>" "\\<one\\>"
    "\\<id\\>" "\\<main\\>"  "\\<rec\\>" "\\<where\\>" "->" "=>" "<=" "!" "?"
    ;("\\<repeat\\>" . font-lock-builtin-face)
    ;("\\<try\\>" . font-lock-builtin-face)
    ;("\\<topdown\\>" . font-lock-builtin-face)
    ;("\\<one\\>" . font-lock-builtin-face)
    ;("\\<oncetd\\>" . font-lock-builtin-face)
    ;("\\<not\\>" . font-lock-builtin-face)
    ("^[ \t]*\\([a-zA-Z0-9'_-]+\\)[ \t]*\\(([^)]*)[ \t]*\\)?:" 
     (1 font-lock-type-face nil nil)
     (2 font-lock-variable-name-face nil t))
    ("^[ \t]*\\([a-zA-Z0-9'_-]+\\)[ \t]*\\(([^)]*)[ \t]*\\)?=" 
     (1 font-lock-function-name-face nil nil)
     (2 font-lock-variable-name-face nil t))
    ))

(defvar sdf2-keywords
  '("\\<module\\>" "\\<imports\\>" "\\<exports\\>" 
    "\\<context-free\\>" "\\<lexical\\>" "\\<syntax\\>" "\\<sorts\\>"
    "\\<restrictions\\>" "\\<definition\\>" "\\<priorities\\>"
    ("\\<cons\\>" . font-lock-function-name-face)
    ("\\<reject\\>" . font-lock-function-name-face)
    ("\\<bracket\\>" . font-lock-function-name-face)
    ("\\<left\\>" . font-lock-function-name-face)
    ("->[ \t]*\\([a-zA-Z0-9'_-]+\\)" .(1 font-lock-variable-name-face nil nil))
  ))

(defun stratego-comment-indent ()
  0)

(defun stratego-indent-line ()
  "Indent current line as Stratego code."
  (interactive)
  (indent-line-to (stratego-get-indent stratego-indentation-list))
  (save-excursion
    (stratego-format-line)))

(defun sdf2-indent-line ()
  "Indent current line as SDF2 code."
  (interactive)
  (indent-line-to (stratego-get-indent sdf2-indentation-list))
  (save-excursion
    (sdf2-format-line)))


(defvar stratego-base-indent 0)
(defvar stratego-empty-indent 0)
(defvar stratego-lvl1-indent 2)
(defvar stratego-rule-indent 2)
(defvar stratego-strategy-indent 2)
(defvar stratego-default-indent 8)
(defvar stratego-colon-indent 6)
(defvar stratego-after-colon-indent 8)
(defvar stratego-equals-indent 6)
(defvar stratego-after-equals-indent 8)
(defvar stratego-arrow-indent 40)
(defvar stratego-after-arrow-indent 42)

(defvar stratego-indentation-list
  '(("module" . stratego-base-indent)
    ("imports" . stratego-base-indent)
    ("rules" . stratego-base-indent)
    ("signature" . stratego-base-indent)
    ("strategies" . stratego-base-indent)
    ("sorts" . stratego-lvl1-indent)
    ("operations" . stratego-lvl1-indent)
    ("[a-zA-Z_()'0-9 \t]*:.*$" . stratego-rule-indent)
    (".*=[^>].*$" . stratego-strategy-indent)
    (".*=$" . stratego-strategy-indent)
    ("[ \t]*$" . stratego-empty-indent)))

(defvar sdf2-indentation-list
  '(("definition" . stratego-base-indent)
    ("module" . stratego-base-indent)
    ("imports" . stratego-base-indent)
    ("exports" . stratego-base-indent)
    ("sorts" . stratego-lvl1-indent)
    ("context-free" . stratego-lvl1-indent)
    ("lexical" . stratego-lvl1-indent)
    ("restrictions" . stratego-lvl1-indent)
    (".*->.*$" . stratego-strategy-indent)
    (".*-/-.*$" . stratego-strategy-indent)
    (">" . stratego-lvl1-indent)
    ("[ \t]*$" . stratego-empty-indent)
    ))

(defun stratego-get-bol ()
  (save-excursion
    (beginning-of-line)
    (point)))
  
(defun stratego-get-eol ()
  (save-excursion
    (end-of-line)
    (point)))
  
(defun stratego-get-indent (list)
  (save-excursion
    (beginning-of-line)
    (skip-chars-forward " \t")
    (let
	((pos nil))
      (while list
	(if (looking-at (car (car list)))
	    (setq pos (cdr (car list))))
	(setq list (cdr list)))
      (if (not pos)
	  (setq pos (or (stratego-last-open-column)
			stratego-default-indent)))
      (eval pos))))

(defun stratego-format-line ()
  (interactive)
  (save-excursion
    (beginning-of-line)
    (if (search-forward ":" (stratego-get-eol) t)
	(progn
	  (backward-char)
	  (indent-to stratego-colon-indent)
	  (forward-char)
	  (if (looking-at "[ \t]*$")
	      (indent-to stratego-after-colon-indent))))
    (if (search-forward-regexp "=[^>]" (stratego-get-eol) t)
	(progn
	  (backward-char 2)
	  (indent-to stratego-equals-indent)
	  (forward-char 2)
	  (if (looking-at "[ \t]*$")
	      (indent-to stratego-after-equals-indent))))
    (if (search-forward-regexp "=$" (stratego-get-eol) t)
	(progn
	  (backward-char)
	  (indent-to stratego-equals-indent)))))

(defun sdf2-format-line ()
  (interactive)
  (save-excursion
    (beginning-of-line)
    (if (search-forward "->" (stratego-get-eol) t)
	(progn
	  (backward-char 2)
	  (indent-to stratego-arrow-indent)
	  (forward-char 2)
	  (if (looking-at "[ \t]*$")
	      (indent-to stratego-after-arrow-indent))))))

(defun stratego-electric-colon (N)
  (interactive "p")
  (save-excursion
    (indent-line-to stratego-rule-indent))
  (indent-to stratego-colon-indent)
  (insert-char ?: N)
  (indent-to stratego-after-colon-indent))

(defun stratego-electric-equals (N)
  (interactive "p")
  (save-excursion
    (indent-line-to stratego-strategy-indent))
  (indent-to stratego-equals-indent)
  (insert-char ?= N)
  (indent-to stratego-after-equals-indent))

(defun stratego-insert-Hs-list ()
  (interactive)
  (insert "Hs([])")
  (backward-char 2))

(defvar stratego-open-paren "[({"
  "Characters which will be considered as open parens.")

(defvar stratego-close-paren "])}"
  "Characters which will be considered as close parens.

`]' must be the first character, if it is used.")

(defun stratego-find-last-open (&optional OPEN CLOSE)
  "Returns the posistion of the last open paren in the buffer."
  (save-excursion
    (if (not OPEN)
	(setq OPEN stratego-open-paren))
    (if (not CLOSE)
	(setq CLOSE stratego-close-paren))
    (let
	((found nil)
	 (pos nil)
	 (nesting 1)
	 char)
      (while (and (not found)
		  (skip-chars-backward (concat "^" OPEN CLOSE))
		  (> (point) 1))
	(backward-char)
	(setq char (buffer-substring-no-properties (point) (+ 1 (point))))
	(if (string-match (concat "[" OPEN "]") char)
	    (progn
	      (setq nesting (- nesting 1))
	      (if (= nesting 0)
		  (setq pos (point) found t))))
	(if (string-match (concat "[" CLOSE "]") char)
	    (setq nesting (+ nesting 1))))
      pos)))

(defun stratego-last-open-column ()
  "Returns the column number of the last open paren, or  nil  if none exists."
  (save-excursion
    (let ((pos (stratego-find-last-open)))
      (if pos
	  (progn
	    (goto-char pos)
	    (+ 1 (current-column)))
	nil))))
	       
	    
    

  
