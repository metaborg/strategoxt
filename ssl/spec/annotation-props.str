\literate[annotation-props]

	\begin{abstract}

  The annotation properties of Stratego provide a standard way to annote a 
  term with a set of properties to a term. A property is a key-value pair,
  which can be compared to the attributes of XML. Properties are however
  superior to XML's attributes because they can be structured like any ATerm.
  Annotation properties of a term always contain just one property for a certain key.
  Thus the key uniquely specifies a property

	\end{abstract}

\begin{code}
module annotation-props
imports lib 
\end{code}

  This module offers various strategies on properties. Most strategies
  operate on the term where the properties are attached to. Property keys
  are therefor passed as an argument to the strategy.
  
\begin{code}
strategies
\end{code}

  The \verb|valid-props-term| strategy determines whether the annotation of the current term
  is valid as a properties annotation. The annotation must thus be a list of tuples.
  \verb|valid-props-term| will fail and print a debug statement when the annotation of the current term
  is not a valid properties annotation. Otherwise it will leave the current term untouched.

\begin{code}
  valid-props-term =
      id{ valid-props }
\end{code}

  The \verb|valid-props| strategy determines whether the \emph{current term}
  is valid as a properties annotation. The term must be a list of tuples.
  \verb|valid-props| will fail and print a debug statement when the current 
  term is not a valid properties annotation. Otherwise it will leave the
  current term untouched.

\begin{code}
  valid-props =
    risky(!"Not a valid properties annotation: ", 
        is-list; map(?(_, _)))
\end{code}

  The \verb|get-props| strategy results with the annotation of
  the current term. If the current term hasn't got an annotation
  it will result in the empty list. This strategy doesn't guarantee
  that the result is a valid properties annotation.

\begin{code}
  get-props =
    if-annotation( get-annotations, ![])
\end{code}

  The \verb|preserve-props(s)| strategy preserves the properties of
  the current term over the application of a specified strategy \verb|s|.
  The properties which are added during the applicaiton of \verb|s| will
  be lost. This strategy is useful if you want rules or strategies to
  be annotation preserving. The annotations will be lost on application 
  of a transformation in Stratego that doesn't take account for annotations.

  The \verb|merge-props(s)| strategy is a variant of \verb|preserve-props|.
  It merges the properties that are attached to the current term after
  the application of a strategy \verb|s|, with the properties that were attacted
  to the current term \emph{before} the application of \verb|s|. The properties
  of the new current term will be preferred over the properties of the old
  current term if there are any duplicates.

\begin{code}
  preserve-props(s) =
    preserve-annotation(s)

  merge-props(s) =
    if-annotation( Merge-Props(s), s)
  // TODO: ensure unique
\end{code}

  The \verb|has-prop(p)| strategy checks whether the current term has a property
  with the specified key \verb|p|. The strategy will fail if the current term hasn't got
  the specified property. Otherwise the current term will be left untouched.

  \paragraph{Examples}

  \begin{verbatim}
  <has-prop(!"type")> BinOp(Int(4), Int(5)){[("type", Int)]} 
    => BinOp(Int(4), Int(5))
  <has-prop(!"type")> BinOp(Int(4), Int(5)) => fails
  \end{verbatim}

\begin{code}
  has-prop(p)    =
    where(get-prop(p))
\end{code}

  The \verb|has-prop(p, c)| strategy checks whether the current term has a property
  with the specified key \verb|p| and whether the value of this property satisfies 
  a condition \verb|c|. 
  The strategy will fail if the current term hasn't got
  the specified property or the application of the condition on the value fails.
  Otherwise the current term will be left untouched.

\begin{code}
  has-prop(p, c) =
    where(get-prop(p); c)
\end{code}

  The \verb|get-prop(p)| strategy results in the value of the property of the current term
  with the specified key \verb|p|. The strategy will fail if the current term hasn't got
  the specified property.

  \paragraph{Examples}

  \begin{verbatim}
  <get-prop(!"type")> BinOp(Int(4), Int(5)){[("type", Int)]}
    => Int
  <get-prop(!"type")> BinOp(Int(4), Int(5)) => fails
  \end{verbatim}

\begin{code}
  get-prop(p) =
    get-annotations; <lookup> (<p> (), <id>)
\end{code}

  The \verb|apply-prop(p, s)| strategy applies the specified strategy \verb|s| 
  to the value of the property of the current term with the specified key \verb|p|.
  The strategy will \emph{not} fail if the current term hasn't got the specified property.
  The current term (despite from its annotation) will be left untouched.

\begin{code}
  apply-prop(p, s) =
    if-annotation(apply-prop-existing(p, s), id)
\end{code}

  The \verb|replace-prop(p, v)| strategy replaces the value of the property of the current term with the 
  specified key \verb|p| with a new value \verb|v|. 
  If the current term hasn't got the specified property this strategy will not fail 
  or add the new property to the properties.

\begin{code}
  replace-prop(p, v) =
    apply-prop(p, v)
\end{code}

  The \verb|add-prop(p, v)| strategy adds a new property to the properties of the current term with the 
  specified key \verb|p| and the value \verb|v|. This strategy will not check whether the current
  term already has a property with the specified key \verb|p|.

\begin{code}
  add-prop(p, v) =
    if-annotation(add-prop-existing(p, v), add-prop-empty(p, v))
\end{code}

  The \verb|set-prop(p, v)| strategy adds a new property to the properties of the current term with the 
  specified key \verb|p| and the value \verb|v| if the current term has no property with the specified
  key \verb|p|. \verb|set-prop(p, v)| will replace the value of the property \verb|p| with \verb|v| 
  if the current term already has a property \verb|p|.

  Note that this strategy should therefor be preferred over \verb|replace-prop| or \verb|add-prop|.

\begin{code}
  set-prop(p, v) =
    has-prop(p) < replace-prop(p, v) + add-prop(p, v)
\end{code}

  \paragraph{Private strategies}

  The following strategies are private. They are used from the public strategies in this module.
  They are not documented and shouldn't be used because they don't have a clear interface
  and are subject to undocumented changes or removal.

\begin{code}
strategies //private
  is-same-prop =
    ?((p, _), (p, _))

  is-prop(p) =
    where( !(<id; Fst>, <p> ()); eq)

  apply-prop-existing(p, s) =
    id{map( apply-2-prop( is-prop(p), s))}

  apply-2-prop(c, s) =
    where(c) < (id, s) + id

  apply-2-prop(s) =
    (id, s)

  add-prop-existing(p, v) =
    id{![(<p> (), <v> ()) | <id>]}

  add-prop-empty(p, v)    =
    ?t; !t{(<p> (), <v> ())}

  props-union =
    ?(ps1, ps2); <union> (ps1, <diff(is-same-prop)> (ps2, ps1))

rules // private

  Merge-Props(s):
    t{p1*} -> r{p2*}
      where <s> t => r
          ; <props-union> (<get-props> r, [p1*]) => [p2*]
\end{code}
